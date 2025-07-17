#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(void)
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll size, days, hikes = 0, rains = 0;
        cin >> size >> days;
        int arr[size], rainspre[size][2] = {0};
        for (ll i = 0; i < size; i++)
            cin >> arr[i],
                rainspre[i][0] = rains + arr[i],
                rains = rainspre[i][0];

        if (rainspre[days - 1][0] == 0)
            rainspre[0][1] = 1;

        for (int i = 1; i <= size - days; i++) {
            if (rainspre[i + days - 1][0] - rainspre[i - 1][0] == 0)
                rainspre[i][1] = 1;
        }
        for (int i = 0; i < size - days + 1; i++)
        {
            if (rainspre[i][1] == 1)
                hikes++,
                    i += days;
        }
        cout << hikes << endl;
    }
    return 0;
}