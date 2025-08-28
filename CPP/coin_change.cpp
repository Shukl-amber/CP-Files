#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll> minCoins;

ll solve(ll amt)
{
    if (amt <= 0)
        return 0;
    if (amt <= 3)
        return amt;

    return min({solve(amt - 1), solve(amt - 2), solve(amt - 3)}) + 1;
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
    minCoins.resize(amt);
    // cout << "Enter Values of Coins: ";
    // for (ll i = 0; i < size; i++)
    // {
    //     cin >> coins[i];
    //     minCoins[coins[i]] = 1;
    // }

    cout << "Answer is: " << solve(amt);
    return 0;
}
