#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll size, k;
        cin >> size >> k;

        unordered_map<int, int> freq;
        vector<ll> arr(size);

        for (ll i = 0; i < size; i++)
        {
            cin >> arr[i];
            freq[arr[i]]++;
        }

        freq.erase(arr[0]);
        int distinct = freq.size() + 1;

        vector<int> freq_vec;
        for (auto &p : freq)
            freq_vec.push_back(p.second);

        freq.clear();
        arr.clear();

        sort(freq_vec.begin(), freq_vec.end());

        for (int f : freq_vec)
            if (k >= f && distinct > 1)
            {
                k -= f;
                distinct--;
            }
            else
                break;

        cout << distinct << endl;
    }
    return 0;
}
