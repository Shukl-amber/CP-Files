#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(void)
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll a, b;
        cin >> a >> b;

        if (a == 1 && b == 1)
        {
            cout << 2 << endl;
            continue;
        }
        else if (__gcd(a, b) > 1)
        {
            cout << 0 << endl;
            continue;
        }

        if (__gcd(a + 1, b) > 1 || __gcd(b + 1, a) > 1)
            cout << 1 << endl;
        else
            cout << 2 << endl;
    }
    return 0;
}