#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int a, b, n;
        cin >> n >> a >> b;
        int pot = (a - b);

        while (n >= a)
            n -= pot;

        cout << n << endl;
    }
    return 0;
}
