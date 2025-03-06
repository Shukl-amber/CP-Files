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
        sus.erase(sus.size()-2,sus.size());
        cout << sus << "i" endl;
    }
    return 0;
}