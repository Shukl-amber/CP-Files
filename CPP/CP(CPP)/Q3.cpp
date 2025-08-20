#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll size;
        cin >> size;
        ll fences[size], icount = 0, mins = 0, largest = 0, map;
        unordered_map<ll, ll> freq;

        cout << freq[1] << endl;

        // for (ll i = 0; i < size; i++)
        // {
        //     cin >> fences[i];
        //     if (fences[i] == 1)
        //         icount++;
        //     else
        //         freq[fences[i]]++;
        // }

        // for (auto i : freq)
        //     if (i.second > largest)
        //         largest = i.second;

        // if (largest > icount)
        // {
        //     mins = 1;
        //     mins += (size - largest);
        // }
        // else
        //     mins += (size - icount);

        // cout << mins << endl;
    }
}
