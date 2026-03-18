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
        if ((x > 49 && y > 49 ) || (x > 49 && z > 49 ) || (z > 49 && y > 49 ))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
