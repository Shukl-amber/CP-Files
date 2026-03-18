#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll size, temp, k, total = 0;
        cin >> size >> k;
        vector<ll> arr;
        for (ll i = 0; i < size; i++)
        {
            cin >> temp;
            if (temp > 5)
                arr.push_back(temp);
        }
        size = arr.size();
        sort(arr.rbegin(), arr.rend());
        for (int i = 0; i < size; i++)
        {
            if (k > 0)
                total += (arr[i] - 5);
            else if (arr[i] > 10)
                total += (arr[i] - 10);
            k--;
        }
        cout << total << endl;
    }
    return 0;
}
