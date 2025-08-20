#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {

        int n;
        cin >> n;
        
        for (int i = 0; i < n/3; i++)
            cout << "abc";
        
        for (int i = 0; i < n % 3; i++)
            cout << char('a');

        cout << endl;
    }
    return 0;
}
