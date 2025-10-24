#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll n, hao = 0, m1 = 0;
        cin >> n;

        while (n > 2)
        {
            m1 = n / 3;
            n -= (2 * m1);
            hao += m1; 
        }
        cout << hao << endl;
    }
    return 0;
}
