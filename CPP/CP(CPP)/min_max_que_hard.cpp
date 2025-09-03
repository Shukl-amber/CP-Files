#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll solve(vector<ll> &arr)
{
    ll front = arr[0], end = arr[0];
    for (ll i = 1; i < arr.size(); i++)
    {
        if (i % 2 == 0)
        {
            if (front > end)
                end = arr[i];
            else
                front = arr[i];
        }
        else
        {
            if (front > end)
                front = arr[i];
            else
                end = arr[i];
        }
    }
    return min(front, end);
}

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll size, q;
        cin >> size >> q;
        vector<ll> arr(size);
        for (ll i = 0; i < size; i++)
            cin >> arr[i];

        ll lastS = solve(arr);
        cout << lastS;

        ll minVal = *min_element(arr.begin(), arr.end());
        ll maxVal = *max_element(arr.begin(), arr.end());

        for (ll i = 0; i < q; i++)
        {
            ll pos, x;
            cin >> pos >> x;
            pos--;

            ll oldVal = arr[pos];

            bool Flag = (oldVal == minVal || oldVal == maxVal ||
                                x < minVal || x > maxVal ||
                                pos < 3 || pos >= size - 3);

            arr[pos] = x;

            if (x < minVal)
                minVal = x;
            if (x > maxVal)
                maxVal = x;

            if (Flag)
            {
                lastS = solve(arr);
                if (oldVal == *min_element(arr.begin(), arr.end()) ||
                    oldVal == *max_element(arr.begin(), arr.end()))
                {
                    minVal = *min_element(arr.begin(), arr.end());
                    maxVal = *max_element(arr.begin(), arr.end());
                }
            }
            cout << " " << lastS;
        }
        cout << "\n";
    }
    return 0;
}
