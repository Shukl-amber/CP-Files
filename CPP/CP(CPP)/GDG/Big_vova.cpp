#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll size, max = -1, idx = -1, temp = 0, tempGCD = 0;
        cin >> size;
        vector<vector<ll>> a(size, vector<ll>(size, 0));
        vector<ll> b(size, 0);

        for (ll i = 0; i < size; i++)
        {
            cin >> a[i][0];
            if (a[i][0] > max)
                max = a[i][0],
                idx = i;
        }

        ll curr = max;
        idx = -1;
        b[0] = max;
        a[0][1] = 1;

        for (ll i = 0; i < size; i++)
        {
            for (ll j = 0; j < size; j++)
            {
                if (a[j][1] == 0)
                {
                    temp = a[j][0];
                    tempGCD = __gcd(temp, curr);
                    if (tempGCD > curr)
                    {
                        curr = tempGCD;
                        idx = j;
                    }
                }
            }
        }
    }
    return 0;
}
