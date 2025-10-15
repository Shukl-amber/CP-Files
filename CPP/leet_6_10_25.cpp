#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

class Solution
{
public:
    vector<int> avoidFlood(vector<int> &rains)
    {
        unordered_map<int, int> dups;
        int dry_days = 0, counter = 0;
        vector<int> result(rains.size(), 0), drys;

        for (int i = 0; i < rains.size(); i++)
        {
            if (rains[i] == 0)
            {
                dry_days++;
                drys.push_back(i);
                continue;
            }
            else
            {
                result[i] = -1;
            }

            dups[rains[i]]++;

            if (dups[rains[i]] >= 2)
            {
                if (dry_days > 0)
                {
                    dups[rains[i]] = 1;
                    dry_days--;
                    result[drys[counter]] = rains[i];
                    counter++;
                }
                else
                {
                    vector<int> empty(0);
                    return empty;
                }
            }
        }

        for (int i = 0; i < drys.size(); i++)
            if (result[drys[i]] == 0)
                result[drys[i]] = 1;

        return result;
    }
};