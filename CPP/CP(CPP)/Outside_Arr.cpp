#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int size;
        cin >> size;
        vector<ll> arr(size);
        unordered_set<ll> numbers;

        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
            numbers.insert(arr[i]);
        }

        if (size == 1)
        {
            ll sum = arr[0] * 2;
            if (numbers.count(sum))
                cout << -1 << endl;
            else
                cout << arr[0] << " " << arr[0] << "\n";
            continue;
        }

        vector<ll> candidates;
        unordered_set<ll> added;

        for (int i = 0; i < min(5, size); i++)
        {
            if (!added.count(arr[i]))
                candidates.push_back(arr[i]),
                    added.insert(arr[i]);

            for (int i = max(0, size - 5); i < size; i++)
                if (!added.count(arr[i]))
                    candidates.push_back(arr[i]),
                        added.insert(arr[i]);

            bool found = false;
            for (int i = 0; i < candidates.size() && !found; i++)
                for (int j = 0; j < candidates.size() && !found; j++)
                {
                    ll sum = candidates[i] + candidates[j];
                    if (!numbers.count(sum))
                        cout << candidates[i] << " " << candidates[j] << "\n",
                        found = true;
                }

            if (!found)
                cout << -1 << endl;
        }

        return 0;
    }
}