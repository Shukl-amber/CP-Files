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
            cin >> arr[i],
                numbers.insert(arr[i]);

        if (size == 1)
            if (numbers.count(0))
                cout << "-1" << endl;
            else
            {
                cout << arr[0] << " " << arr[0] << endl;
                continue;
            }

        vector<ll> Arr;
        int set = min(5, size);

        for (int i = 0; i < set; i++)
            Arr.push_back(arr[i]);
        for (int i = max(0, size - set); i < size; i++)
            Arr.push_back(arr[i]);

        bool sol = false;
        for (int i = 0; i < Arr.size() && !sol; i++)
        {
            for (int j = i; j < Arr.size() && !sol; j++)
            {
                ll sum = Arr[i] + Arr[j];
                if (numbers.count(sum) == 0)
                {
                    cout << Arr[i] << " " << Arr[j] << endl;
                    sol = true;
                }
            }
        }

        if (!sol)
            cout << "-1" << endl;
    }

    return 0;
}