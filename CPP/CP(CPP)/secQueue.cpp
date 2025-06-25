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
        int arr[size][1], min = INT_MAX;
        for (ll i = 0; i < size; i++)
        {
            cin >> arr[i][0];
            if (i == 0)
                arr[i][1] = arr[i][0];
            else
                arr[i][1] = (arr[i][0] >= i) ? arr[i][0] + 1 : i;
            if (arr[i][1] < min)
                min = arr[i][1];
        }
        cout << min << endl;
    }
    return 0;
}