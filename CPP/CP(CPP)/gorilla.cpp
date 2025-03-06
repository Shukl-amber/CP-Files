#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(void)
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll size, replace, z = 0, count = 0;
        cin >> size >> replace;
        ll arr[size], check[size][2];
        for (ll i = 0; i < size; i++)
        {
            cin >> arr[i];
            for (ll j = 0; j < z; j++)
                if (arr[i] == check[j][0])
                {
                    check[j][1] += 1;
                    goto skip;
                }
            check[z][0] = arr[i];
            check[z][1] = 1;
            z++;
        skip:;
        }
        {
            if (replace==size)
            {
                cout << 1 << endl;
                goto skip1;
            }
            else
            {
            ll store[z];
            for (ll i = 0; i < z; i++)
                store[i] = check[i][1];
            sort(store, store + z);
            for (ll i = 0; i < z; i++)
            {
                replace -= store[i];
                if (replace < 0)
                {
                    cout << z - count << endl;
                    goto skip1;
                }
                count++;
            }
            }
            cout << z - count << endl;
        skip1:;
        }
    }
    return 0;
}