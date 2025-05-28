#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(void){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    if(a*c>b*d){
        cout << a*c << endl;
    }else {
        cout << b*d << endl;
    }
    
    return 0;
}