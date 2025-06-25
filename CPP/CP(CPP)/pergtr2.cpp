#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(void)
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int x, y, z;
        cin >> x >> y >> z;

        if (z == 0 && x > 0)
        {
            cout << "NO" << endl;
            continue;
        }
        if (y == 0)
        {
            if (x - (z + 1) <= 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
        {
            if (x - z <= 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}