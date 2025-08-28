#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll> minCoins;

ll solve(ll amt)
{
    if (amt <= 0)
        return 0;

    if (amt <= 3)
        return 1;

    if (minCoins[amt] != 0)
        return minCoins[amt];

    ll result = min({solve(amt - 1), solve(amt - 2), solve(amt - 3)}) + 1;
    minCoins[amt] = result;
    return result;
}

int main()
{
    // ll size;
    // cout << "Enter Number of Different Coins: ";
    // cin >> size;
    // vector<ll> coins(size);
    ll amt;
    cout << "Enter Amount: ";
    cin >> amt;
    minCoins.resize(amt + 1);
    minCoins[1] = minCoins[2] = minCoins[3] = 1;
    // cout << "Enter Values of Coins: ";
    // for (ll i = 0; i < size; i++)
    // {
    //     cin >> coins[i];
    //     minCoins[coins[i]] = 1;
    // }

    cout << "Answer is: " << solve(amt);
    return 0;
}
