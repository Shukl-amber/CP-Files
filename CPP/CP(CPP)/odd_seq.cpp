#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll solve(ll num)
{
    ll size = 0, last, flag = 0;
    if (num % 2)
        return 0;

    if (num / 10 == 0)
        return -1;

    last = num % 10;

    while (num != 0)
    {
        ll temp = num % 10;

        if (temp % 2)
            return 1;

        if (temp > last)
            flag = 1;

        num /= 10;
        size++;
    }
    
    if (flag)
        return 2;
    else
        return 3;
}

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll num;
        cin >> num;
        cout << solve(num) << endl;
    }
    return 0;
}
