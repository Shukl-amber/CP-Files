#include<bits/stdc++.h>
using namespace std;
int main(void){
    long long tc;
    cin >> tc;
    while (tc--)
    {
        long long a,b;
        cin >> a >> b;
        if (a>b)
            cout << a+1 << endl;
        else    
            cout << b+1 << endl;  
    }
    return 0;
}