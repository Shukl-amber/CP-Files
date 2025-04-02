#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(void){
    int tc;
    cin >> tc;
    while (tc--)
    {
        string str;
        int size,ops;
        cin >> size >> ops;
        cin >> str;
        int ones = 0,zeros=0,sps=0;
        for (int i = size-1; i >= 0; i--)
        {
            if(str[i]=='1')
                ones++;
            else
                zeros++;
            if(ones>=1&&str[i]=='0')
                sps++;
        }
        cout << min(sps,ops)+ones << endl;
    }
    return 0;
}