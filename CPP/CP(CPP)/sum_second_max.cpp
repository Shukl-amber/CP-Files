#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll n;
        cin >> n;
        vector<ll> arr(n);
        for (ll i = 0; i < n; i++)
            cin >> arr[i];

        vector<ll> idx(n);
        iota(idx.begin(), idx.end(), 0);
        sort(idx.begin(), idx.end(), [&](ll a, ll b) {
            return arr[a] > arr[b];
        });

        set<ll> active;
        active.insert(-1);
        active.insert(n);

        ll ans = 0;

        for (ll i = 0; i < n; i++)
        {
            ll pos = idx[i];

            auto right_it = active.upper_bound(pos);
            ll R  = *right_it;
            ll RR = *next(right_it);

            auto left_it = prev(right_it);
            ll L  = *left_it;
            ll LL = *prev(left_it);

            ll count1 = 0, count2 = 0;

            if (L != -1)
                count1 = (L - LL) * (R - pos);
            if (R != n)
                count2 = (pos - L) * (RR - R);
            ans += arr[pos] * (count1 + count2);
            active.insert(pos);
        }

        cout << ans << endl;
    }
    return 0;
}