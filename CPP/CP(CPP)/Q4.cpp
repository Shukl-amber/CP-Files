#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{

    int tc;
    cin >> tc;
    while (tc--)
    {
        ll N;
        cin >> N;
        ll arr[N];

        if (N <= 1)
        {
            cout << 0 << endl;
            continue;
        }

        for (ll i = 0; i < N; i++)
            arr[i] = i;

        for (ll i = 0; i < N; i++)
        {
            for (ll j = 0; j < N; j++)
            {
                cout << arr[i] % N << " ";
                arr[i]++;
            }
            cout << endl;
        }
    }
}
