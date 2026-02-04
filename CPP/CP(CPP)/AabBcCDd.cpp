#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int size, max1 = 0, max2 = 0;
        string str;
        array<int, 26> count{};

        cin >> size;
        cin >> str;

        for (int i = 0; i < size; i++)
        {
            char s = tolower(str[i]);
            count[s - 'a']++;
        }

        for (int c : count)
            if (c >= max1)
            {
                max2 = max1;
                max1 = c;
            }
            else if (c > max2)
                max2 = c;

        cout << max1 + max2 << endl;
    }
    return 0;
}
