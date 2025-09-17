#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll size, mod, base = 0;
        cin >> size >> mod;
        vector<ll> arr(size);
        for (ll i = 0; i < size; i++)
            cin >> arr[i],
                base += arr[i];

        for (ll i = 0; i < size; i++)
        {
            ll diff = mod - arr[i];

            ll curr = 0;

            for (ll j = 0; j < size; j++)
                curr += (arr[j] + diff) % mod;

            if (curr < base)
                base = curr;
        }
        cout << base << endl;
    }
    return 0;
}
