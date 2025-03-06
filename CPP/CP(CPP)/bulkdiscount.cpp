#include<bits/stdc++.h>
using namespace std;
int main(void){
    long long tc;
    cin >> tc;
    while (tc--)
    {
        long long size=0;
        cin >> size;
        long long arr[size];
        for (long long i = 0; i < size; i++)
            cin >> arr[i];
        sort(arr,arr+size);
        long long price=0;
        for (long long i = 0; i < size; i++)
        {
            if (arr[i]-i>=0)
            {
                price+=arr[i]-i;
            }
        }
        cout << price << endl;     
    }
    return 0;
}