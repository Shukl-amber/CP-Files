#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(void)
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int odd = 0, even = 0;
        ll size;
        cin >> size;
        int arr[size];
        for (ll i = 0; i < size; i++)
            cin >> arr[i];
        for (ll i = 0; i < size; i++){
            if(i%2==0)
                even += arr[i];
            else
                odd += arr[i];
        }
        cout << (even > odd ? even : odd) << endl;
    }
    return 0;
}