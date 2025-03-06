#include<iostream>
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
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            if (arr[i]==i+1)
                count++;
        }

        if (count==0)
        {
            cout << n-2 << endl;
        }
        else if (count==n)
        {
            cout << n << endl;
        }
        else
        {
            cout << n-1 << endl;
        }
    }
    return 0;
}