#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll size, flag = 0;
        cin >> size;
        vector<ll> arr(size);
        for (ll i = 0; i < size; i++)
            cin >> arr[i];

        for (ll i = 1; i < size; i++)
            if (arr[i - 1] > arr[i])
            {
                flag = 1;
                cout << i << ' ' << i + 1 << endl;
                break;
            }

        if (!flag)
            cout << -1 << endl;
    }
    return 0;
}
