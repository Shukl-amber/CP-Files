#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int a, b;
        cin >> a >> b;
        b = floor(b / 2);
        cout << min(a, b) * 3 << endl;
    }
    return 0;
}
