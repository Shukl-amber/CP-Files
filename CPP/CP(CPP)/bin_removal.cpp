#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(void){
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll n,x,k;
        cin >> n >> x >> k;
        string str;
        cin >> str;
        ll count=0,pt=0;
        for (ll i = 0; i < n; i++)
        {
            if (str[i]=='1')
                count++;
            else
                pt+=count;
        }
        if (pt<=x&&(pt%k==0))
            cout << 1 << endl;
        else
            cout << 2 << endl;       

    }
    return 0;
}