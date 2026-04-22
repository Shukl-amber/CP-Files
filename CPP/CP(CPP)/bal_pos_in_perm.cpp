#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll size,ans=0;
        cin >> size;
        vector<ll> arr(size);
        for (ll i = 0; i < size; i++)
            cin >> arr[i];

        vector<int> L(size, 0);
        vector<int> R(size, 0);

        for (ll i = 0; i < size; i++)
            for (ll j = 0; j < i; j++)
                if (arr[j] < arr[i])
                    L[i]++;

        for (ll i = size - 1; i >= 0; i--)
        {
            for (ll j = i + 1; j < size; j++)
                if (arr[j] > arr[i])
                    R[i]++;
            if (L[i] == R[i])
                ans++;
        }

        cout << ans << '\n';
    }
    return 0;
}
