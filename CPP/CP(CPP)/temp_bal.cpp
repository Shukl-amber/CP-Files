#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tc;
    cin >> tc;
    while (tc--)
    {
        int size;
        int count = 0;
        int sec=0;
        cin >> size;
        int arr[size];
        for (int i = 0; i < size; i++)
            cin >> arr[i];

        for (int i = 0; i < size-1; i++)
        {
            count+=arr[i];
            sec+=abs(count);
            
        }
        cout << sec << endl;
    }
    return 0;
}