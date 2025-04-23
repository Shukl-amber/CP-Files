#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(void){
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll num;
        cin >> num;
        if(num>3)
            cout << num+(num-1)+(num-2) << endl;
        else 
            cout << -1 << endl;
    }
    return 0;
}