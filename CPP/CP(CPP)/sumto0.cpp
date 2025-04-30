#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(void)
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        if (n == 1)
        {
            cout << -1 << endl;
            continue;
        }
        if (n % 2 == 0)
            for (int i = 0; i < n / 2; i++)
                cout << 1 << " " << -1 << " ";
        if (n % 2 == 1)
        {
            cout << 1 << " ";
            for (int i = 0; i < n / 2 - 1; i++)
                cout << 1 << " " << -1 << " ";
            cout << 1 << " " << -2 << " ";
        }
        cout << endl;
    }
    return 0;
}