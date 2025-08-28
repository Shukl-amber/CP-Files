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
        ll temp = INT_MAX;

        for (auto i : coins)
        {
            temp = solve(coins, amt - i);
            if (temp < minResult)
                minResult = temp;
        }

        if (minResult == INT_MAX)
        {
            minCoins[amt] = INT_MAX;
            return INT_MAX;
        }
        else
        {
            minCoins[amt] = minResult + 1;
            return minResult + 1;
        }
    }
};