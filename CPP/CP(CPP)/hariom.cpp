#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll MOD = 998244353;

vector<ll> fib;
vector<ll> totalWays;

void solve(int Largest) 
{
    fib.resize(Largest + 5);
    totalWays.resize(Largest + 5);
    
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i <= Largest + 2; i++) {
        fib[i] = (fib[i-1] + fib[i-2]) % MOD;
    }
    
    totalWays[0] = 1;
    for (int i = 1; i <= Largest; i++) {
        totalWays[i] = (totalWays[i-1] * 2) % MOD;
    }
}

int main()
{
    int tc;
    cin >> tc;
    
    vector<int> queries(tc);
    int Largest = 0;
    
    for (int i = 0; i < tc; i++) {
        cin >> queries[i];
        Largest = max(Largest, queries[i]);
    }
    
    solve(Largest);
    
    for (int i = 0; i < tc; i++) {
        int n = queries[i];
        cout << (totalWays[n] - fib[n+2] + MOD) % MOD << endl;
    }
    return 0;
}
