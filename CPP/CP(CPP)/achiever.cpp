#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(void){
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll size;
        cin >> size;
        int arr[size];
        for (ll i = 0; i < size; i++)
            cin >> arr[i];
        int max=arr[0];
        cout << 1;
        for (ll i = 1; i < size; i++)
        {
            cout << " ";
            if (arr[i]>max)
            {
                cout << 1;
                max=arr[i];
            }
            else
            {
                cout << 0;
            }           
        }
        cout << endl;
    }
    return 0;
}