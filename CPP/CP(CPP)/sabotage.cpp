#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll size, chef, k, rank = 1;
        cin >> size >> chef >> k;

        vector<ll> arr(size);
        for (ll i = 0; i < size; i++)
            cin >> arr[i];

        sort(arr.rbegin(), arr.rend());

        chef += (k * 100);

        for (int i = k; i < size; i++)
            if (arr[i] > chef)
                rank++;
                

        cout << rank << endl;
    }
    return 0;
}
