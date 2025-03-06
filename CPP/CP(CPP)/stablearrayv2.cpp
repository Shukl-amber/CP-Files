#include<bits/stdc++.h>
using namespace std;
int maxterm(int arr[],int size){
    int max=0,maxi=0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]>max)
            {
                max=arr[i];
                maxi=i;
            }
    }
    return maxi;
}
int main(void){
    int tc;
    cin >> tc;
    while (tc--)
    {
        int size,max=0,maxi=0,z=0,j=1;
        cin >> size;
        int arr[size],secarr[size];
        for (int i = 0; i < size; i++){
            cin >> arr[i];
            if (arr[i]>max)
            {
                max=arr[i];
                maxi=i;
            }
        }        
        secarr[0]=maxi;   
        z=maxi;
        while (z<size-1)
        {
            for (int i = z+1; i < size; i++)
            {
                secarr[j]=maxterm(arr+i,size);
            }
            
        }
        
        
    }
    return 0;
}