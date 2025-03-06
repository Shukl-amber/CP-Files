#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(void){
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll size,total=0,mand=0,opt=0;
        cin >> size;
        string a,b;
        cin >> a;
        cin >> b;
        for (ll i = 0; i < size; i++){
            if (a[i]!=b[i])
                opt++;
            else if (a[i]=='1'&&b[i]=='1')
                mand++;
        }
        if (opt==size)
        {
            cout << "YES" << endl;
        }
        else if (mand%2!=0)
        {
            cout << "YES" << endl;
        }
        else if (opt!=0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}