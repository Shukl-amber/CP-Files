#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, k, count = 0;
        cin >> n >> k;

        if (k != n)
        {
            if (k < n / 2)
            {
                count = k;
            }
            else
                count = n - k;
        }
        cout << count << endl;
    }
    return 0;
}
