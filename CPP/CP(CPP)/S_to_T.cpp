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
        ll size;
        cin >> size;
        cin >> s;
        cin >> t;

        if (s == t)
        {
            cout << 0 << endl;
            continue;
        }
        else if (s[0] != t[0])
        {
            cout << -1 << endl;
            continue;
        }
        ll zcount = 0, diffs = 0;
        vector<int> arr;
        for (ll i = 0; i < size; i++)
        {
            if (s[i] == '0')
            {
                zcount++;
            }
            if (s[i] != t[i])
            {
                diffs++;
                arr.push_back(i);
            }
        }
        if (zcount == size)
        {
            cout << -1 << endl;
            continue;
        }
        if (zcount == 0)
        {
            cout << diffs << endl;
            for (auto i : arr)
            {
                cout << i << " ";
            }
            continue;
        }
    }
    return 0;
}