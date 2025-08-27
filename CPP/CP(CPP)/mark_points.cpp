#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll size;
        cin >> size;
        string str;
        cin >> str;
        bool flag = true;

        for (int i = 0; i < size; i++)
        {
            if (str[i] == '1')
            {
                char temp = str[i];
                if ((str[i + 1] == temp && str[i + 2] == temp) || (str[i - 1] == temp && str[i + 1] == temp) || (str[i - 2] == temp && str[i - 1] == temp))
                    continue;
                else
                    flag = false;
            }
        }
        if (flag)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
