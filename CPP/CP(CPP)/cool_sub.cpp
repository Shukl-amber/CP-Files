#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(void){
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll size=0,dup=0;
        cin >> size;
        ll arr[size];
        for (ll i = 0; i < size; i++)
            cin >> arr[i];
        sort(arr,arr+size);
        for (ll i = 0; i < size-1; i++)
        {
            if (arr[i]==arr[i+1])
            {
                dup=arr[i];
            }
        }
        if (dup==0)
            cout << -1 << endl;
        else
            cout << 1 << endl << dup << endl;   
    }
    return 0;
}