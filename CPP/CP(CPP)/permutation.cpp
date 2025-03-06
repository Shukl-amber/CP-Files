#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tc;
    cin >> tc;
    while (tc--)
    {
        int size;
        float subsize;
        cin >> size >> subsize;
        if (subsize<=1)
        {
            for (int i = 1; i <= size; i++)
            {
                cout << i << " ";
            }
            cout << endl;
            continue;
        }
        int arr[size];
        int n=ceil(size/subsize);
        int z=1;
        for (int i = 0; i < size; i++)
        {
            if ((i+1)%n==0)
            {
                arr[i]=z;
                z++;
            }
            else
            {
                arr[i]=size-i+z-1;
            }
            cout << arr[i] << " ";
        }
        cout << endl;      
    }
    return 0;
}