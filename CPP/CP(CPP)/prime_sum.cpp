#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll size, c1 = 0, c2 = 0, c3 = 0;
        cin >> size;
        vector<ll> arr(size);
        for (ll i = 0; i < size; i++)
        {
            cin >> arr[i];
            arr[i] == 1 ? c1++ : (arr[i] == 2 ? c2++ : c3++);
        }

        ll twos = (c1 > 1 ? (c1 * (c1 - 1)) / 2 : 0);  
        ll threes = ((c1 > 0 && c2 > 0) ? c1 * c2 : 0);  
        ll fives = ((c2 > 0 && c3 > 0) ? c2 * c3 : 0);   

        printf("%lld\n", twos + threes + fives);
    }
    return 0;
}
