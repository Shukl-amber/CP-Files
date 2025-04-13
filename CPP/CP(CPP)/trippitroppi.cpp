#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(void){
    int tc;
    cin >> tc;
    while (tc--)
    {
        string s[3];
        for (int i = 0; i < 3; i++)
        {
            cin >> s[i];
            cout << s[i][0];
        }
        cout << endl;
    }
    return 0;
}