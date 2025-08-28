#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

class Solution
{
    vector<ll> minCoins;

public:
    int coinChange(vector<int> &coins, int amt)
    {
        minCoins.assign(amt + 1, -1);
        minCoins[0] = 0;

        ll result = solve(coins, amt);
        if (result == INT_MAX)
            return -1;
        else
            return result;
    }

    ll solve(vector<int> &coins, ll amt)
    {
        if (amt < 0)
            return INT_MAX;

        if (amt == 0)
            return 0;

        if (minCoins[amt] != -1)
            return minCoins[amt];

        ll minResult = INT_MAX;

        for (int i : coins)
            if (i <= amt)
                minResult = min(minResult, solve(coins, amt - i) + 1);

        minCoins[amt] = minResult;
        return minResult;
    }
};