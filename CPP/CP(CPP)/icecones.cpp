#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        x -= (y * z);
        cout << ((x < 0) ? 0 : x) << endl;
    }
    return 0;
}
