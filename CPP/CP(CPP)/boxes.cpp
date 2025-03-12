#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(void)
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        bool targeteven, bothsame;
        ll target, a, b;
        cin >> a >> b >> target;
        ll diff = abs(a - b);

    if (diff == target)
        cout << 0 << endl;
    else
    {
        int sec=abs(diff-target);

        if (sec%2==0)
            cout << sec/2 << endl;
        else
            cout << -1 << endl;
    }
    }
    return 0;
}