#include<iostream>
using namespace std;
int main(void){
    int tc;
    cin >> tc;
    while (tc--)
    {
        int size;
        cin >> size;
        int arr[size];
        for (int i = 0; i < size; i++)
            cin >> arr[i];
        bool cond=true;
        while (cond)
        {
            cond=false;
            for (int i = 1; i < size-1; i++)
            {
                int diff=arr[i-1]-arr[i+1];
                if (diff==0)
                    continue;
                else if (diff%2==0&&diff!=0)
                {
                    if (diff<0)
                    {
                        arr[i-1]+=diff/2;
                        arr[i+1]-=diff/2;
                    }
                    if (diff>0)
                    {
                        arr[i-1]-=diff/2;
                        arr[i+1]+=diff/2;
                    }
                    cond=true;
                }
            }
        }
        for (int i = 0; i < size-1; i++)
        {
            if (arr[i]!=arr[i+1])
            {
                cout<<"NO"<<endl;
                goto skip;
            }
        }
        cout << "YES" << endl;
        skip:;        
    }
    return 0;
}