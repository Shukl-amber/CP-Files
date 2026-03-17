#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        if (n <= 4)
        {
            cout << max(200, n * 100) << endl;
            continue;
        }

        switch (n % 4)
        {
        case 1:
            cout << ((n - 2) * 100) + 200 << endl;
            break;
        default:
            cout << n * 100 << endl;
            break;
        }
    }
    return 0;
}
