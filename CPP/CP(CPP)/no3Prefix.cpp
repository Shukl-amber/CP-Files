#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(void)
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll size = 0, pre = 0, one = -1, two = -1, bad = -1;
        cin >> size;
        int arr[size], pmod[size];
        for (ll i = 0; i < size; i++)
        {
            cin >> arr[i];
            pre += arr[i];
            pmod[i] = pre % 3;
            switch (pmod[i])
            {
            case 0:
                bad = i;
                break;
            case 1:
                if (one == -1)
                    one = i;
                break;
            case 2:
                if (two == -1)
                    two = i;
                break;
            }
        }
        if ((one != -1 && bad < one) || (two != -1 && bad < two))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}