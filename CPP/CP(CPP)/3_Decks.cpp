#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(void){
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll a=0,b=0,c=0;
        cin >> a >> b >> c;
        c-=(b-a);
        a=b;
        if (c<b)
        {
            cout << "NO" << endl;
            continue;
        }
        if (b==c)
        {
            cout << "YES" << endl;
            continue;
        }
        if ((c-b)%3==0)
        {
            cout << "YES" << endl;
            continue;
        }
        cout << "NO" << endl;
    }
    return 0;
}