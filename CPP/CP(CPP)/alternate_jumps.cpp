#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll n;
        cin >> n;
        ll temp = n;

        for (int i = 0; i < n; i++)
        {
            temp = (i % 2) ? (temp - (n - i)) : (temp + (n - i));
        }
        
        cout << temp << endl;
    }
    return 0;
}
