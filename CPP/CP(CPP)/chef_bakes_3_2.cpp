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
        vector<int> arr(size);
        for (ll i = 0; i < size; i++)
            cin >> arr[i];

        int final = 0;
        int best = 1;

        int max = *max_element(arr.begin(), arr.end());

        for (int x = 1; x <= max; x++)
        {
            int profit = 0;

            for (int i = 0; i < size; i++)
            {
                int sold = min(x, arr[i]);
                int loss = x - sold;
                profit += sold * (50 - 30);
                profit -= loss * 30;
            }

            if (profit > final)
                final = profit,
                best = x;
            
        }

        cout << final << endl;
    }
    return 0;
}