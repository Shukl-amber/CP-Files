#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int a, b, c, total = 0;
        cin >> a >> b >> c;

        total += (b / 2);
        b -= (b / 2);

        if (c <= a)
        {
            total += c;
            a -= c;
        }
        else
        {
            total += a;
            a = 0;
        }

        if (b > 0)
            if (a > 1)
            {
                total += 1;
                a -= 2;
            }

        total += (a/4);

        cout << total;
    }
    return 0;
}
