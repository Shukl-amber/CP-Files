#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll total, ready, cap, change = 0;

        cin >> total >> ready >> cap;

        if (!(ready % cap))
        {
            cout << 0 << endl;
            continue;
        }

        ll top, bottom;

        top = ((ready / cap) + 1) * cap;
        bottom = (ready / cap) * cap;

        if (top > total)
            change = ready - bottom;
        else
            change = min(top - ready, ready - bottom);

        cout << change << endl;
    }
    return 0;
}
