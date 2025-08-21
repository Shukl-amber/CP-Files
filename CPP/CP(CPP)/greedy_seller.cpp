#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<pair<ll, ll>> deals;

int precompute(ll n)
{
    ll watermelons = 1, x = 0;

    if (deals.size())
    {
        watermelons = deals.back().first * 3;
        x = deals.size();
    }

    while (watermelons <= n)
    {
        ll cost;
        if (x == 0)
            cost = 3;
        else
            cost = pow(3, x + 1) + x * pow(3, x - 1);

        deals.push_back({watermelons, cost});
        x++;
        watermelons = pow(3, x);
    }

    for (int i = deals.size() - 1; i >= 0; i--)
        if (deals[i].first <= n)
            return i;
}

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll melons, cost = 0;
        cin >> melons;

        int index = precompute(melons);

        while (melons > 0 && index >= 0)
        {
            if (deals[index].first <= melons)
            {
                cost += deals[index].second;
                melons -= deals[index].first;
            }
            else
                index--;
        }
        cout << cost << endl;
    }
    return 0;
}
