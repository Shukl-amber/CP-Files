#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(void){
    int tc;
    cin >> tc;
    while (tc--)
    {
        string n;
        cin >> n;
        char value = '999999999';
        for (char c : n) {
            if (c < value) {
                value = c;
            }
        }
        cout << value << endl;
    }
    return 0;
}