#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tc;
    cin >> tc;
    while (tc--)
    {
        
        int n,count=0;
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++)
            cin >> arr[i];
        
        for (int i = 0; i < n; i++)
        {
            arr[i]=arr[i]+(i+1);
        }

        sort(arr,arr+n);

        if (n%2!=0)
        {
            cout << arr[0] << endl;
        }
        else
        {
            cout << arr[0]-1 << endl;
        }
        

    }
    return 0;
}