#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll size;
        cin >> size;
        string str;
        cin >> str;
        
        vector<ll> pre(size + 1, 0);

        for (ll i = 1; i <= size; i++)
            pre[i] = pre[i - 1] + (str[i - 1] - '0');

        if (pre[size] == 0)
        {
            cout << 0 << endl;
            continue;
        }

        ll cost = 0;    

        for (ll i = 0; i < size; i++)
        {
            cost += pre[i + 1] - pre[i];
            
            if (i != size - 1)
                cost += pre[i + 2] - pre[i];
        }
        cout << cost << endl;
    }
    return 0;
}
