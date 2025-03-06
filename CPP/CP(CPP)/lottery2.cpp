#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(void)
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll size, chef, total = 0;
        cin >> size;
        ll arr[size];
        for (ll i = 0; i < size; i++)
            cin >> arr[i];

        chef = arr[0];
        sort(arr, arr + size);
        if (arr[0] == chef)
            total += chef + (arr[1] - chef) / 2;
        else if (arr[size - 1] == chef)
            total += 1000001 - chef + (chef - arr[size - 2]) / 2;
        else if (arr[0] != chef && arr[size - 1] != chef)
        {
            ll it = 0;

            for (ll i = 0; i < size; i++)
                if (arr[i] == chef)
                {
                    it = i;
                }

            total += ((chef - arr[it - 1]) / 2) + ((arr[it + 1] - chef) / 2) + 1;
        }
        cout << total << endl;
    }
    return 0;
}