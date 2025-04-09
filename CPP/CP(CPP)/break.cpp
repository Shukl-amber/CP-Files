#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(void){
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll size,total=0;
        cin >> size;
        int arr[size];
        for (ll i = 0; i < size; i++)
            cin >> arr[i],
            total += arr[i]-1;
        cout << total << endl;
    }
    return 0;
}