#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll n, queries;
        string s;

        cin >> n >> queries;
        cin >> s;
        vector<ll> cons(n, 0);

        bool flag = true;
        for (auto i : s)
            if (i == 'B')
                flag = false;

        for (ll i = 0; i < n; i++)
        {
            if (s[i] == 'B')
                cons[i] = 0;
            else
            {
                ll count = 0;
                ll j = i;
                while (s[j] == 'A')
                {
                    count++;
                    j = (j + 1) % n;
                    if (j == i)
                        break;
                }
                cons[i] = count;
            }
        }

        for (ll i = 0; i < queries; i++)
        {
            ll a;
            cin >> a;

            if (flag)
            {
                cout << a << endl;
                continue;
            }

            ll seconds = 0;
            ll it = 0;

            while (a > 0)
            {
                if (s[it] == 'A')
                {
                    ll next = cons[it];
                    ll Min = min(next, a);
                    a -= Min;
                    seconds += Min;
                    it = (it + Min) % n;
                }
                else
                {
                    seconds++;
                    a /= 2;
                    it = (it + 1) % n;
                }
            }

            cout << seconds << endl;
        }
    }
    return 0;
}
