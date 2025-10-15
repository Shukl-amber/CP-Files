    #include <bits/stdc++.h>
    using namespace std;
    typedef long long ll;

    int main()
    {
        int tc;
        cin >> tc;
        while (tc--)
        {
            ll size;
            cin >> size;
            vector<ll> arr(size);

            for (ll i = 0; i < size; i++)
                cin >> arr[i];

            sort(arr.rbegin(), arr.rend());
            ll maxi = arr[0] - 1;

            ll count = 0;

            for (ll i = 0; i < size; i++)
                if (arr[i] % maxi != 0)
                    count++;

            if (count >= 2)
                cout << maxi << endl;
            else
                cout << maxi - 1 << endl;
        }
        return 0;
    }
