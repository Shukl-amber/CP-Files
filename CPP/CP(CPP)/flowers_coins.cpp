#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int flowers;

        cin >> flowers;

        switch (flowers % 3)
        {
        case 0:
            cout << (flowers / 3) * 5 << endl;
            break;
        case 1:
            cout << (((flowers / 3) - 1) * 5) + 8 << endl;
            break;
        case 2:
            cout << ((flowers / 3) * 5) + 4 << endl;
            break;
        }
    }
    return 0;
}
