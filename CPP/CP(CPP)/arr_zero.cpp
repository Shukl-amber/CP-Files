#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int a, b, c, flag = 0;
        cin >> a >> b >> c;

        (c % 3 != 0) ? (flag = 1) : (flag = 0);
        (flag == 0 && (b - 2*a) != (c/3)) ? (flag = 1) : 0;

        cout << (flag ? "No" : "Yes") << endl;
    }
    return 0;
}
