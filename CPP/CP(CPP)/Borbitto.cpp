#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(void)
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll m, n, l, r;
        cin >> n >> m >> l >> r;
        if (n == m)
        {
            cout << l << " " << r << endl;
            continue;
        }
        if (m == 0)
        {
            cout << 0 << " " << 0 << endl;
            continue;
        }

        ll i = 0, j = 0;

        if ((m <= r))
            i = 0,
            j = m;
        else if (m <= abs(l))
            i = -m,
            j = 0;
        else
        {
            j = r;
            m -= r;
            i = -m;
        }
        cout << i << " " << j << endl;
    }
    return 0;
}