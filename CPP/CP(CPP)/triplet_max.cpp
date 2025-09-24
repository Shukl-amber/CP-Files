#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int x, y;
        cin >> x >> y;

        if (min(x, y) == 0)
        {
            if (y == 0)
                cout << x / 3 << endl;
            else
                cout << (y * 2) / 3 << endl;
            continue;
        }

        int total = (x + y) / 3;
        
        cout << min(total, y) * 2 + (total - min(total, y)) * 1 << endl;

    }
    return 0;
}