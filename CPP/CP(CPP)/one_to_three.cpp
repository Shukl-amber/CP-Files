#include<iostream>
using namespace std;
int main(void){
    int tc;
    cin >> tc;
    while (tc--)
    {
        
        int n,sum=0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        bool flag = true;

        do
        {
            flag = false;
            for (int i = 1; i < n-1; i++)
            {
                if ((arr[i]==3) && (arr[i-1]+arr[i+1]==4))
                {
                    arr[i] = 1;
                    flag = true;
                }
            }
        }while(flag);

        for (int i = 0; i < n; i++)
            sum+=arr[i];
        
        cout << sum << endl;
        
    }
    return 0;
}