#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(void){
    int a,b,c;
    cin >> a >> b >> c;
    if(a+b>c && b+c>a && c+a>b)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}