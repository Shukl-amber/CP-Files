#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(void)
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll n;
        cin >> n;
        vector<vector<ll>> arr(n, vector<ll>(n));
        vector<ll> temp;

        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
            {
                cin >> arr[i][j];
                if ((i == 0 && j >= 0) || ((i == (n - 1)) && j > 0))
                    temp.push_back(arr[i][j]);
            }

        for (int i = 1; i <= 2 * n; i++)
        {
            bool found = find(temp.begin(), temp.end(), i) != temp.end();
            if(!found)
            {
                cout << i << " ";
                break;
            }
        }

        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                if ((i == 0 && j >= 0) || ((i == (n - 1)) && j > 0))
                    cout << arr[i][j] << " ";
        cout << endl;
    }
    return 0;
}
