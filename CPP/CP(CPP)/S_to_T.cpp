#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int TC;
    cin >> TC;
    while (TC--)
    {
        int N;
        string s, t;
        cin >> N >> s >> t;

        if (s[0] != t[0])
        {
            cout << -1 << "\n";
            continue;
        }

        vector<int> ops;
        ops.reserve(3 * N);

        for (int i = N - 1; i >= 1; --i)
        {
            if (s[i] == t[i])
                continue;

            if (s[i - 1] == '1')
            {
                ops.push_back(i);
                s[i] = (s[i] == '0' ? '1' : '0');
            }
            else
            {
                if (i - 2 < 0 || s[i - 2] == '0')
                {
                    ops.clear();
                    break;
                }
                ops.push_back(i - 1);
                s[i - 1] = '1';
                ops.push_back(i);
                s[i] = (s[i] == '0' ? '1' : '0');
                ops.push_back(i - 1);
                s[i - 1] = '0';
            }
        }

        if (ops.empty() && s != t)
        {
            cout << -1 << "\n";
            continue;
        }

        cout << ops.size() << "\n";
        if (!ops.empty())
            for (int x : ops)
                cout << x << " ";

        cout << "\n";
    }
    return 0;
}
