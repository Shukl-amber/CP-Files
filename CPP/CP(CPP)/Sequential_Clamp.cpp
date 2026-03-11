#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int size;
        cin >> size;

        ll current = 999;

        for (int i = 0; i < size; i++)
        {
            ll left, right;
            cin >> left >> right;

            if (current < left)
                current = left;
            else if (current > right)
                current = right;
        }

        cout << current << '\n';
    }
    return 0;
}
