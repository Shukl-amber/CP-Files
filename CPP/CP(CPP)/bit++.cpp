#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(void)
{
    int tc;
    cin >> tc;
    int x = 0;
    while (tc--)
    {
        string op;
        cin >> op;
        if (op.find("++")!= string::npos)
            x++;
        else
            x--;
    }
    cout << x << endl;
return 0;
}