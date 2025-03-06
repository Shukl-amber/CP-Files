#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tc;
    cin >> tc;
    while (tc--)
    {
        int size,A,uppercount=0,lowercount=0;
        cin >> size >> A;
        float arr[size],upper[size],lower[size];
        for (int i = 0; i < size; i++){
        cin >> arr[i];
        upper[i] = ceil(arr[i]/A);
        lower[i]=floor(arr[i]/A);
        uppercount+=upper[i];
        lowercount+=lower[i];
        }

        if (uppercount==0||lowercount==0)
            cout << "YES" << endl;
        else    
            cout << "NO" << endl;  
         
    }
    return 0;
}