#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll size, a, b;
        cin >> size >> a >> b;
        vector<ll> arr(size);
        ll temp1, temp2, best=999999;
        for (ll i = 0; i < size; i++)
        {
            cin >> temp1 >> temp2;
            arr[i] = abs(a - temp1) + abs(b - temp2);
            best = min(best,arr[i]);
        }
        cout << best << endl;
    }
    return 0;
}
