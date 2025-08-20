#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    
    float cakepertruck, trucks;
    int n,x,y;

    cin >> n >> x >> y;

    cakepertruck = floor(y / x);
    trucks = ceil(n / cakepertruck);
    
    cout << trucks << endl;

    return 0;
}
