#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll size, m;
        cin >> size >> m;

        vector<ll> arr(size);
        vector<ll> counter(m, 0);
        ll base = 0, Min = 0, curr = 0;

        for (ll i = 0; i < size; i++)
        {
            cin >> arr[i];
            base += arr[i];
        }

        curr = Min = base;

        for (ll i = 0; i < size; i++)
            if (arr[i] > 0)
                counter[m - arr[i]]++;

        for (ll k = 1; k < m; k++)
        {
            curr += size - m * counter[k];
            if (Min > curr)
                Min = curr;
        }

        cout << Min << endl;
    }
    return 0;
}
