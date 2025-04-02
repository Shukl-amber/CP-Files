#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(void)
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll score = 0, ops = 0, curr = 1, A = 0, B = 0, Turn = 0, min = 0, max = 0;
        cin >> ops;
        for (ll i = 0; i < ops; i++)
        {
            if (A == 0 && Turn == 0)
            {
                score += curr;
                A = 1;
                Turn = 1;
            }
            else if (A == 1 && Turn == 0)
            {
                score -= curr;
                A = 0;
                Turn = 1;
            }
            else if (B == 0 && Turn == 1)
            {
                score += curr;
                B = 1;
                Turn = 0;
            }
            else if (B == 1 && Turn == 1)
            {
                score -= curr;
                B = 0;
                Turn = 0;
            }
            if (score > max)
            {
                max = score;
            }
            if (score < min)
            {
                min = score;
            }
            curr *= 2;
        }
        cout << (max - min) % 998244353 << endl;
    }
    return 0;
}