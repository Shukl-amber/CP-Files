#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tc;
    cin >> tc;
    while (tc--)
    {
        int words,length,count=0;
        cin >> words >> length;
        int arr[words];

        for (int i = 0; i < words; i++)
        {
            string s;
            cin >> s;
            arr[i]=s.size();
        }
        for (int i = 0; i < words; i++)
        {
            if (length-arr[i]<0)
                break;
            else
                length-=arr[i];
            count ++;            
        }
        
        cout << count << endl;
    }
    return 0;
}