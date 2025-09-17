#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
       ll n,len;
       cin >> n >> len;

       ll time = n * len;
       cout << time / 60 << " " << time % 60 << endl;
    }
    return 0;
}
