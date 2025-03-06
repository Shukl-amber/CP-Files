#include<iostream>
using namespace std;
int main(void){
    int tc;
    cin >> tc;
    while (tc>0)
    {
        long long size;
        cin >> size;
        long long arr[size];
        for (long long i = 1; i < size; i++)
            cin >> arr[i];
        
        long long starter;
        starter=arr[1]/2;
        arr[0]=starter;
        for (long long i = 1; i <= size; i++){
            arr[i]-=arr[i-1];
            cout << arr[i-1] << " ";
        }
        cout << endl;
        tc--;
    }
    return 0;
}