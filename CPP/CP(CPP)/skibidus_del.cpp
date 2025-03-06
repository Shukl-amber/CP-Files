#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(void){
    int tc;
    cin >> tc;
    while (tc--)
    {
        string sus;
        cin >> sus;
        for (ll i = 0; i < sus.size()-1; i++)
        {
            if (sus[i]==sus[i+1]){
                cout << 1 << endl;
                goto skip;
                break;
            }
        }
        cout << sus.size() << endl;
        skip:;
    }
    return 0;
}