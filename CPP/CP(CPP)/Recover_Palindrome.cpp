#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int size, flag = 1;
        cin >> size;
        string s;
        cin >> s;

        for (int i = 0; i < size - 1 / 2; i++)
        {
            if (s[i] == '?' && s[(size - 1) - i] == '?')
            {
                flag = 0;
                break;
            }
        }
        
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
