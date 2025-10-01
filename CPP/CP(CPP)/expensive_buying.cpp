#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
       ll size,k;
        cin >> size >> k;
        vector<ll> arr(size);
        for (ll i = 0; i < size; i++)
            cin >> arr[i];

        sort(arr.rbegin(), arr.rend());
        
        int count = 0;
        for (int i = 0; i < k; i++)
            count += arr[i];
        cout << count << endl;
    }
    return 0;
}
