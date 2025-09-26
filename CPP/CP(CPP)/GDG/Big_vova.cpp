#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll size, max = -1, idx = -1, temp = 0, tempGCD = 0, maxGCD = -1;
        cin >> size;
        vector<ll> a(size);
        vector<bool> used(size, false);
        vector<ll> b(size, 0);

        for (ll i = 0; i < size; i++)
        {
            cin >> a[i];
            if (a[i] > max)
                max = a[i],
                idx = i;
        }

        ll curr = max;
        b[0] = max;
        used[idx] = true;

        cout << b[0] << " ";

        for (ll i = 1; i < size; i++)
        {
            maxGCD = -1;
            idx = -1;
            for (ll j = 0; j < size; j++)
            {
                if (!used[j])
                {
                    temp = a[j];
                    tempGCD = __gcd(temp, curr);
                    if (tempGCD > maxGCD)
                    {
                        maxGCD = tempGCD;
                        idx = j;
                    }
                }
            }
            if (idx != -1) {
                b[i] = a[idx];
                used[idx] = true;
                curr = __gcd(curr, a[idx]);
                cout << b[i] << " ";
            }
        }

    }
    return 0;
}
