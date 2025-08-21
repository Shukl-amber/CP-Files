#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        ull n, temp;
        cin >> n;
        vector<ull> sol;

        for (int i = 1; i <= 18; i++)
        {
            temp = 1;
            for (int j = 0; j < i; j++)
                temp *= 10;

            if (n % (temp + 1) == 0)
            {
                temp = n / (temp + 1);
                if (temp)
                    sol.push_back(temp);
            }
        }

        sort(sol.begin(), sol.end());

        cout << sol.size() << endl;
        if (sol.size())
        {
            for (auto i : sol)
                cout << i << " ";
            cout << endl;
        }
    }
    return 0;
}
