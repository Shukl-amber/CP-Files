#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll size, m, a = 0, b = 0;
        string str;
        cin >> size >> m;
        cin >> str;
        
        for (ll i = 0; i < m; i++)
        {
            if (str[i] == '1')
                a++;
            else
                b++;
        }

        for (int i = m; i < size; i++)
        {
            if (a > b)
                b++;
            else
                a++;
        }

        if (a == b)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
