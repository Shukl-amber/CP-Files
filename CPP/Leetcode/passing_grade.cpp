#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll size,count=0;
        cin >> size;
        vector<ll> arr(size);
        for (ll i = 0; i < size; i++)
        {
            cin >> arr[i];
            if (arr[i]>=arr[0])
                count ++;
        }
        cout << count << endl;
    }
    return 0;
}
