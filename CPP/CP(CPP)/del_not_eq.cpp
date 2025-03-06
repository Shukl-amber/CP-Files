#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tc;
    cin >> tc;
    while (tc--)
    {
        int size;
        cin >> size;
        string str;
        cin >> str;
        int count1=0,count0=0;
        for (int i = 0; i < size; i++)
        {
            if (str[i] == '1')
                count1++;
            else
                count0++;
        }
        if (count0==size||count1==0)
            cout << size;
        else
            cout << 1;
        cout << endl;
    }
    return 0;
}