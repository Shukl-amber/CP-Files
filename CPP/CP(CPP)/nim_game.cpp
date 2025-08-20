#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int tc;
    cin >> tc;
    ll mod = 998244353;

    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        int onePile = 0, multiPile = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 1)
                onePile++;
            else if (arr[i] > 1)
                multiPile++;
        }

        if (multiPile == 0)
            cout << (onePile % 2) << "\n";
        else
            cout << (mod + 1) / 2 << "\n";
    }
    return 0;
}
