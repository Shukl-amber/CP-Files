#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(void)
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll size;
        cin >> size;
        int arr[size], one = 0, two = 0;
        bool found = false;
        
        for (ll i = 0; i < size; i++)
        {
            cin >> arr[i];
            switch (arr[i] % 3)
            {
            case 0:
                found = true;
                break;
            case 1:
                one++;
                break;
            case 2:
                two++;
                break;
            }
        }

        if (found || (one >= 1 && two >= 1) || (one >= 3) || (two >= 3))
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }
    return 0;
}