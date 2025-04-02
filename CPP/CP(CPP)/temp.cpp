#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int tc;
    cin >> tc;
    while(tc--) {
        ll ops;
        cin >> ops;
        ll ans=pow(2,ops)-pow(2,ops-2);
        
        if(ops>1)
            cout << (ans)%998244353 << endl;
        else
            cout << 1 << endl;
    }
    return 0;
}
