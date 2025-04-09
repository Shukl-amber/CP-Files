#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(void){
    int tc;
    cin >> tc;
    while (tc--)
    {
        int size;
        cin >> size;
        string s;
        cin >> s;
        int ans = 1;
        int zeros=0, ones=0;
        for (int i = 0; i < size; i++)
        {
            if (s[i] == '0')
                zeros++;
            else
                ones++;
            if (zeros==ones)
                ans*=2;
        }
        cout << ans << endl;
    }
    return 0;
}