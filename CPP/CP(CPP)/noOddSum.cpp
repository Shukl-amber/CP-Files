#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(void)
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll size, ones = 0, twos = 0;
        cin >> size;
        int arr[size];
        for (ll i = 0; i < size; i++)
        {
            cin >> arr[i];
            if (arr[i] == 1)
                ones++;
            else if (arr[i] == 2)
                twos++;
        }
        if (ones == 0 || (twos == 0 && size > 1))
        {
            cout << 0 << endl;
        }
        else if (ones % 2 != 0)
        {
            cout << twos << endl;
        }
        else if (ones % 2 == 0 && ones / 2 <= twos)
        {
            cout << ones / 2 << endl;
        }
        else
        {
            cout << twos << endl;
        }
    }
    return 0;
}