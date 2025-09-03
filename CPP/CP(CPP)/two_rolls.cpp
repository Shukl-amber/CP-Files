#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int x, y;
        cin >> x >> y;
        int flag = 0;
        for (int i = y; i < y + 6; i++)
            for (int j = i + y; j < i + y + 6; j++)
            {
                if (x + j == 50)
                {
                    flag = 1;
                    break;
                }
                if (x + j > 50)
                    break;
            }

        if (flag)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}