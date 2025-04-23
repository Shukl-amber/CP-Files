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
        int arr[size];
        for (ll i = 0; i < size; i++)
            cin >> arr[i];

        sort(arr, arr + size);

        if (arr[size - 1] == arr[0])
            cout << 0 << endl;
        else
            cout << arr[size - 1] - arr[0] - 1 << endl;
    }
    return 0;
}