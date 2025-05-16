#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(void)
{
    string s;
    cin >> s;
    for (ll i = 0; i < s.length(); i++)
        s[i] = min(s[i] - '0', 9 - (s[i] - '0')) + '0';
    cout << s << endl;
    return 0;
}