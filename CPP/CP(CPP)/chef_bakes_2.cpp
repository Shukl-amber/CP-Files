#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(void)
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll size,total=0;
        cin >> size;
        int arr[size];
        for (ll i = 0; i < size; i++)
            cin >> arr[i];
        int arr2[size];
        for (ll i = 0; i < size; i++)
            cin >> arr2[i];

        for(ll i=0; i<size;i++){
            if(arr2[i]<arr[i]){
                total += arr[i] - arr2[i];
            }
        }
        cout << total << endl;
    }
    return 0;
}