#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int flag = 1;
        char arr[9];
        for (int i = 0; i < 9; i++)
            cin >> arr[i];

        int day = stoi(string(1, arr[0]) + string(1, arr[1]));
        string month = string(1, arr[2]) + string(1, arr[3]) + string(1, arr[4]);
        int year = stoi(string(1, arr[5]) + string(1, arr[6]) + string(1, arr[7]) + string(1, arr[8]));

        if (year != 2025)
        {
            cout << "NO" << endl;
            continue;
        }

        if ((day >= 27 && day <= 31 && month == "AUG") || (day >= 01 && day <= 06 && month == "SEP"))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
