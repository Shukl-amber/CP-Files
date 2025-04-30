#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(void)
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll size;
        cin >> size;
        ll arr[size], maxi[size], orig[size + 1];

        for (ll i = 0; i < size; i++)
            cin >> arr[i];

        for (ll i = 0; i < size; i++)
            if (i == 0)
                maxi[0] = arr[0];
            else
                maxi[i] = max(maxi[i - 1], arr[i]);

        for (ll i = size; i >= 0; i--)
            if (i == size)
                orig[size] = 0;
            else
                orig[i] = orig[i + 1] + arr[i];

        for (ll i = 1; i <= size; i++)
            cout << max(orig[size - i], orig[size - i + 1] + maxi[size - i]) << " ";

        cout << endl;
    }
    return 0;
}