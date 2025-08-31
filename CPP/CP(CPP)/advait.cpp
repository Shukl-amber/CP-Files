#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int sum(ll x)
{
    int sum = 0;
    while (x > 0)
    {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

int main()
{
    ll m, n, o;
    cin >> m >> n >> o;

    vector<ll> solutions;
    
    int maxSum = 81,limit=pow(10,9); 
    
    for (int s = 1; s <= 81; s++) {
        ll powered = pow(s, m);
        if (powered > 1e18 / n || n * powered + o >= limit) {
            maxSum = s - 1;
            break;
        }
    }

    for (int s = 1; s <= maxSum; s++)
    {
        ll x = n * pow(s, m) + o;
        if (x > 0 && x < limit && sum(x) == s)
            solutions.push_back(x);
    }

    sort(solutions.begin(), solutions.end());

    cout << solutions.size() << endl;
    for (ll sol : solutions)
        cout << sol << " ";

    return 0;
}
