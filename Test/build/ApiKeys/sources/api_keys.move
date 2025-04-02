module my_addr::api_keys {
    use std::string::String;
    use std::signer;
    use aptos_std::table::{Self, Table};
    use aptos_framework::event;
    use aptos_framework::account;
    
    // Error codes
    const E_NOT_AUTHORIZED: u64 = 1;
    const E_KEY_NOT_FOUND: u64 = 2;
    const E_SERVICE_EXISTS: u64 = 3;
    const E_ALREADY_INITIALIZED: u64 = 4;
    const E_NOT_INITIALIZED: u64 = 5;

    // Add version control
    const VERSION: u64 = 1;
    
    // Add events
    struct ApiKeyEvent has drop, store {
        service: String,
        action: String,
        timestamp: u64
    }

    struct ApiKeyStore has key {
        keys: Table<String, ApiKeyData>,
        owner: address,
        version: u64,
        events: event::EventHandle<ApiKeyEvent>
    }

    struct ApiKeyData has store, drop {
        key: String,
        service: String,
        description: String,
        created_at: u64
    }

    public fun initialize(account: &signer) {
        let addr = signer::address_of(account);
        assert!(!exists<ApiKeyStore>(addr), E_ALREADY_INITIALIZED);
        move_to(account, ApiKeyStore {
            keys: table::new(),
            owner: addr,
            version: VERSION,
            events: account::new_event_handle<ApiKeyEvent>(account)
        });
    }

    public entry fun add_api_key(
        account: &signer,
        service: String,
        key: String,
        description: String
    ) acquires ApiKeyStore {
        let owner = signer::address_of(account);
        let store = borrow_global_mut<ApiKeyStore>(@my_addr);
        
        assert!(store.owner == owner, E_NOT_AUTHORIZED);
        assert!(!table::contains(&store.keys, service), E_SERVICE_EXISTS);

        let api_key = ApiKeyData {
            key,
            service,
            description,
            created_at: aptos_framework::timestamp::now_seconds()
        };

        table::add(&mut store.keys, service, api_key);

        event::emit_event(&mut store.events, ApiKeyEvent {
            service: copy service,
            action: std::string::utf8(b"add"),
            timestamp: aptos_framework::timestamp::now_seconds()
        });
    }

    public entry fun update_api_key(
        account: &signer,
        service: String,
        new_key: String,
        new_description: String
    ) acquires ApiKeyStore {
        let owner = signer::address_of(account);
        let store = borrow_global_mut<ApiKeyStore>(@my_addr);
        
        assert!(store.owner == owner, E_NOT_AUTHORIZED);
        assert!(table::contains(&store.keys, service), E_KEY_NOT_FOUND);

        let api_key = table::borrow_mut(&mut store.keys, service);
        api_key.key = new_key;
        api_key.description = new_description;

        event::emit_event(&mut store.events, ApiKeyEvent {
            service: copy service,
            action: std::string::utf8(b"update"),
            timestamp: aptos_framework::timestamp::now_seconds()
        });
    }

    public fun get_api_key(service: String): String acquires ApiKeyStore {
        assert!(exists<ApiKeyStore>(@my_addr), E_NOT_INITIALIZED);
        let store = borrow_global<ApiKeyStore>(@my_addr);
        assert!(table::contains(&store.keys, service), E_KEY_NOT_FOUND);
        let api_key = table::borrow(&store.keys, service);
        api_key.key
    }

    public fun get_api_key_data(service: String): (String, String, u64) acquires ApiKeyStore {
        assert!(exists<ApiKeyStore>(@my_addr), E_NOT_INITIALIZED);
        let store = borrow_global<ApiKeyStore>(@my_addr);
        let api_key = table::borrow(&store.keys, service);
        (api_key.key, api_key.description, api_key.created_at)
    }

    public fun exists_api_key(service: String): bool acquires ApiKeyStore {
        assert!(exists<ApiKeyStore>(@my_addr), E_NOT_INITIALIZED);
        let store = borrow_global<ApiKeyStore>(@my_addr);
        table::contains(&store.keys, service)
    }

    public entry fun remove_api_key(
        account: &signer,
        service: String
    ) acquires ApiKeyStore {
        let owner = signer::address_of(account);
        let store = borrow_global_mut<ApiKeyStore>(@my_addr);
        
        assert!(store.owner == owner, E_NOT_AUTHORIZED);
        assert!(table::contains(&store.keys, service), E_KEY_NOT_FOUND);

        table::remove(&mut store.keys, service);

        event::emit_event(&mut store.events, ApiKeyEvent {
            service: copy service,
            action: std::string::utf8(b"remove"),
            timestamp: aptos_framework::timestamp::now_seconds()
        });
    }

    #[test_only]
    use aptos_framework::account::create_account_for_test;
    #[test_only]
    use std::string::utf8;
    #[test_only]
    use aptos_framework::genesis;
    #[test_only]
    use aptos_framework::timestamp;

    #[test(framework = @0x1, admin = @my_addr)]
    public fun test_initialize(framework: &signer, admin: &signer) {
        // Initialize framework
        genesis::setup();
        create_account_for_test(signer::address_of(admin));
        timestamp::set_time_has_started_for_testing(framework);
        initialize(admin);
    }

    #[test(framework = @0x1, admin = @my_addr)]
    public fun test_add_api_key(framework: &signer, admin: &signer) acquires ApiKeyStore {
        test_initialize(framework, admin);
        
        add_api_key(
            admin, 
            utf8(b"test_service"), 
            utf8(b"test_key"), 
            utf8(b"test_description")
        );
        let key = get_api_key(utf8(b"test_service"));
        assert!(key == utf8(b"test_key"), 0);
    }

    #[test(framework = @0x1, admin = @my_addr)]
    #[expected_failure(abort_code = E_SERVICE_EXISTS)]
    public fun test_duplicate_service(framework: &signer, admin: &signer) acquires ApiKeyStore {
        test_initialize(framework, admin);
        let service = utf8(b"test_service");
        
        // Add first key
        add_api_key(
            admin, 
            copy service,
            utf8(b"test_key"), 
            utf8(b"test_description")
        );

        // Should fail when adding duplicate service
        add_api_key(
            admin,
            service,
            utf8(b"test_key2"),
            utf8(b"test_description2")
        );
    }

    #[test(framework = @0x1, admin = @my_addr, other = @0x123)]
    #[expected_failure(abort_code = E_NOT_AUTHORIZED)]
    public fun test_unauthorized_access(
        framework: &signer,
        admin: &signer,
        other: &signer
    ) acquires ApiKeyStore {
        test_initialize(framework, admin);
        create_account_for_test(signer::address_of(other));
        
        // Should fail when non-owner tries to add key
        add_api_key(
            other,
            utf8(b"test_service"),
            utf8(b"test_key"),
            utf8(b"test_description")
        );
    }

    #[test(framework = @0x1, admin = @my_addr)]
    public fun test_update_api_key(framework: &signer, admin: &signer) acquires ApiKeyStore {
        test_initialize(framework, admin);
        let service = utf8(b"test_service");
        
        add_api_key(
            admin,
            copy service,
            utf8(b"test_key"),
            utf8(b"test_description")
        );

        update_api_key(
            admin,
            service,
            utf8(b"new_key"),
            utf8(b"new_description")
        );

        let key = get_api_key(utf8(b"test_service"));
        assert!(key == utf8(b"new_key"), 0);
    }

    #[test(framework = @0x1, admin = @my_addr)]
    public fun test_remove_api_key(framework: &signer, admin: &signer) acquires ApiKeyStore {
        test_initialize(framework, admin);
        let service = utf8(b"test_service");
        
        add_api_key(
            admin,
            copy service,
            utf8(b"test_key"),
            utf8(b"test_description")
        );

        remove_api_key(admin, copy service);
        assert!(!exists_api_key(service), 0);
    }

    #[test(framework = @0x1, admin = @my_addr)]
    #[expected_failure(abort_code = E_ALREADY_INITIALIZED)]
    public fun test_double_initialize(framework: &signer, admin: &signer) {
        test_initialize(framework, admin);
        initialize(admin);
    }

    #[test(framework = @0x1, admin = @my_addr)]
    public fun test_exists_api_key(framework: &signer, admin: &signer) acquires ApiKeyStore {
        test_initialize(framework, admin);
        let service = utf8(b"test_service");
        
        assert!(!exists_api_key(copy service), 0);
        
        add_api_key(
            admin,
            copy service,
            utf8(b"test_key"),
            utf8(b"test_description")
        );
        
        assert!(exists_api_key(service), 1);
    }

    #[test(framework = @0x1, admin = @my_addr)]
    public fun test_get_api_key_data(framework: &signer, admin: &signer) acquires ApiKeyStore {
        test_initialize(framework, admin);
        let service = utf8(b"test_service");
        
        add_api_key(
            admin,
            copy service,
            utf8(b"test_key"),
            utf8(b"test_description")
        );
        
        let (key, desc, _) = get_api_key_data(service);
        assert!(key == utf8(b"test_key"), 0);
        assert!(desc == utf8(b"test_description"), 1);
    }

    #[test(framework = @0x1, admin = @my_addr)]
    #[expected_failure(abort_code = E_KEY_NOT_FOUND)]
    public fun test_get_non_existent_key(
        framework: &signer,
        admin: &signer
    ) acquires ApiKeyStore {
        test_initialize(framework, admin);
        get_api_key(utf8(b"non_existent"));
    }

    #[test(framework = @0x1)]
    #[expected_failure(abort_code = E_NOT_INITIALIZED)]
    public fun test_uninitialized_access(framework: &signer) acquires ApiKeyStore {
        genesis::setup();
        get_api_key(utf8(b"test"));
    }

    #[test(framework = @0x1, admin = @my_addr)]
    public fun test_version(
        framework: &signer,
        admin: &signer
    ) acquires ApiKeyStore {
        test_initialize(framework, admin);
        let store = borrow_global<ApiKeyStore>(@my_addr);
        assert!(store.version == VERSION, 0);
    }

    #[test(framework = @0x1, admin = @my_addr, other = @0x123)]
    #[expected_failure(abort_code = E_NOT_AUTHORIZED)]
    public fun test_update_unauthorized(
        framework: &signer,
        admin: &signer,
        other: &signer
    ) acquires ApiKeyStore {
        test_initialize(framework, admin);
        create_account_for_test(signer::address_of(other));
        
        add_api_key(
            admin,
            utf8(b"test_service"),
            utf8(b"test_key"),
            utf8(b"test_description")
        );

        update_api_key(
            other,
            utf8(b"test_service"),
            utf8(b"new_key"),
            utf8(b"new_description")
        );
    }

    #[test(framework = @0x1, admin = @my_addr)]
    #[expected_failure(abort_code = E_KEY_NOT_FOUND)]
    public fun test_remove_non_existent_key(framework: &signer, admin: &signer) acquires ApiKeyStore {
        test_initialize(framework, admin);
        remove_api_key(admin, utf8(b"non_existent"));
    }
}
