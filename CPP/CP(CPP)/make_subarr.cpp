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
        string str;
        cin >> size;
        cin >> str;

        ll left = -1, right = -1, count = 0;

        for (ll i = 0; i < size; i++)
        {
            if (str[i] == '1' && left == -1)
                left = i;
            if (str[size - i - 1] == '1' && right == -1)
                right = size - i - 1;
            if (left != -1 && right != -1)
                break;
        }

        if (left == right)
        {
            cout << 0 << endl;
            continue;
        }

        for (ll i = left; i <= right; i++)
        {
            if (str[i] == '0')
                count++;
        }

        cout << count << endl;
    }
    return 0;
}
