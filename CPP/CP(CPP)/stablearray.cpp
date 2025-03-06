#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tc;
    cin >> tc;
    while (tc--)
    {
        long long size,max=0,maxi=0;
        cin >> size;
        long long arr[size];
        for (int i = 0; i < size; i++){
            cin >> arr[i];
            if (arr[i]>max)
            {
                max=arr[i];
                maxi=i;
            }
        }           
        long long sec1=maxi;
        long long sec=0;
        int flag=1;
        while (flag)
        {
            flag=0;
            for (long long i = maxi+1; i < size-1; i++)
            {
                if (arr[i]<arr[i+1])
                {
                    arr[i]=arr[i+1];
                    flag=1;
                }
            }
            if(flag)
                sec++;
        }
        if (sec1>sec)
            cout << sec1 << endl;
        else
            cout << sec-1 << endl;

        
    }
    return 0;
}