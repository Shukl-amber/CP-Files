#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        ll N;
        cin >> N;

        if (N <= 2)
        {
            cout << N << endl;
            continue;
        }

        if (N % 2 != 0)
        {
            cout << (N / 2) + 1 << endl;
            continue;
        }

        if (N % 4 == 2)
        {
            cout << ((3 * N) / 4) + 1 << endl;
            continue;
        }

        cout << (3 * N) / 4 << endl;
    }
}
