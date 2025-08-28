#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll coin_1 = 3, coin_2 = 5, coin_3 = 7;
vector<ll> minCoins;

ll solve(ll amt)
{
    if (amt < 0)
        return INT_MAX;

    if (amt == 0)
        return 0;

    if (minCoins[amt] != -1)
        return minCoins[amt];
    
    ll minResult = min({solve(amt - coin_1), solve(amt - coin_2), solve(amt - coin_3)});
    
    if (minResult == INT_MAX) {
        minCoins[amt] = INT_MAX;
        return INT_MAX;
    } else {
        minCoins[amt] = minResult + 1;
        return minResult + 1;
    }
}

int main()
{
    // Solving For 3 Coins, can be modified to any 3!
    ll amt;
    cout << "Enter Amount: ";
    cin >> amt;

    minCoins.assign(amt + 1, -1);
    minCoins[0] = 0;

    ll result = solve(amt);
    if (result == INT_MAX) {
        cout << "Impossible To Obtain!";
    } else {
        cout << "Answer is: " << result;
    }
    return 0;
}
