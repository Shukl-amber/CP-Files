#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool comp(int a, int b) {
      return a > b;
}
int main(void){
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll size,hp=0;
        cin >> size >> hp;
        ll arr[size];
        for (int i = 0; i < size; i++)
        cin >> arr[i];
        sort(arr,arr+size,comp);
        for (ll i = 0; i < size; i++)
            arr[i]=arr[i]+(hp*i);
        sort(arr,arr+size);
        cout << arr[size-1] << endl;
        /*min=arr[0]+(hp*(size-1));
        max=arr[size-1];
        if (max>=min)
            cout << max << endl;
        else    
            cout << min << endl;*/
    }
    return 0;
}