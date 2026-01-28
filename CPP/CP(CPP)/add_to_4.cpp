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

        total += min(a, c);

        cout << total << endl;
    }
    return 0;
}
