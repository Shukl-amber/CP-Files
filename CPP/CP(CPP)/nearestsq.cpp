#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(void)
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll n = 0;
        cin >> n;
        if (n == 1)
        {
            cout << 1 << endl;
            continue;
        }
        for (ll test = n / 2; test > 0; test--)
        {
            ll sq = test * test;
            if (sq <= n)
            {
                cout << sq << endl;
                break;
            }
        }
    }
    return 0;
}