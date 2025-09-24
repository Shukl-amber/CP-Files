#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll size;
        cin >> size;
        vector<ll> arr(size);

        for (ll i = 0; i < size; i++)
            cin >> arr[i];

        bool Obri = false, Ebri = false;

        for (ll i = 0; i < size; i++)
        {
            if (arr[i] == 1)
            {
                if (i % 2 == 0)
                    Ebri = true;
                else
                    Obri = true;
            }
        }

        if (Obri && Ebri)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }
    return 0;
}
