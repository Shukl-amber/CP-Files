#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        long long x = 0;
        cin >> x;
            if (x % 33 == 0)
            {
                cout << "YES" << endl;
                goto skip;
            }

        cout << "NO" << endl;
    skip:;
    }
    return 0;
}