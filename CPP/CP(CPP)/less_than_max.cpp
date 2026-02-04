#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll size, temp, total = 0;
        cin >> size;

        vector<ll> arr;
        for (ll i = 0; i < size; i++)
        {
            cin >> temp;
            if (temp != 1)
                arr.push_back(temp);
            else
                total++;
        }

        unordered_map<ll, ll> freq;
        for (ll i = 0; i < size; i++)
            if (arr[i] != 1)
                freq[arr[i]]++;

        ll max = 0;
        if (total > 0)
        {
            max = 1;
            while (freq.find(max + 1) != freq.end())
                max++;
        }

        cout << total + max << endl;
    }
    return 0;
}
Chiii kala dhobale
dhobale madarchod
Chiii kala dhobale
dhobale madarchod
chii kala dhobale
dhobale madarchod
chii kala dhobale
dhobale madarchod
chiii  