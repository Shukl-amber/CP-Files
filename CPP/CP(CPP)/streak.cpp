#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll size, maxi = 0, temp = 0;
        cin >> size;
        vector<ll> arr(size);
        for (ll i = 0; i < size; i++)
        {
            cin >> arr[i];

            if (arr[i])
            {
                temp++;
                maxi = max(temp, maxi);
            }
            else
            {
                temp = 0;
            }
        }

        cout << maxi << endl;
    }
    return 0;
}
