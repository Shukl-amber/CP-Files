#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(void)
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        string s, t;
        int size;
        cin >> size;
        cin >> s;
        cin >> t;
        int diffcount = 0;

        for (int i = 0; i < size; i++)
            if (s[i] == t[i])
                continue;
            else if (s[i] != t[i] && t[i] == '1')
                goto skip;
            else if (s[i] != t[i] && s[i] == '1')
                diffcount++;

        if (diffcount % 2 == 0)
            cout << "YES" << endl;
        else
        {
        skip:
            cout << "NO" << endl;
        }
    }
    return 0;
}