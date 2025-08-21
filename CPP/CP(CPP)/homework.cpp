#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {

        int n1, n2;
        cin >> n1;
        string a, b, c;
        cin >> a;
        cin >> n2;
        cin >> b;
        cin >> c;

        for (int i = 0; i < n2; i++)
            if (c[i] == 'D')
                a += b[i];
            else
                a = b[i] + a;

        cout << a << endl;
    }
    return 0;
}
