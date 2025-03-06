#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tc;
    cin >> tc;
    while (tc--)
    {
        int chairs,ved,varun;
        cin >> chairs >> ved >> varun;
        int arr[chairs];
        for (int i = 0; i < chairs; i++)
            cin >> arr[i];
        sort(arr,arr+chairs);
        for (int i = 0; i < chairs-1; i++)
            varun=varun+arr[i];
        ved=ved+arr[chairs-1];
        if (ved>varun)
            cout << "VED";
        else if (varun>ved)
            cout << "VARUN";
        else
            cout << "EQUAL";  
        cout << endl; 
    }
    return 0;
}