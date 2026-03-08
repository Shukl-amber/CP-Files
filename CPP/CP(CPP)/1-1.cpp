#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll size, z = 0, o = 0;
        cin >> size;
        string str;
        vector<ll> arr(size);
        cin >> str;

        for (ll i = 0; i < size; i++)
            arr[i] = str[i] - '0';

        for (ll i = 1; i < size - 1; i++)
        {
            if (arr[i] == 0 && (arr[i - 1] + arr[i + 1]) == 2)
                arr[i] = 1;
            if (arr[i])
                o++;
        }

        if (arr[0])
            o++;
        if (arr[size - 1])
            o++;

        for (ll i = 1; i < size - 1; i++)
        {
            if ((arr[i] + arr[i - 1] + arr[i + 1]) == 3)
                arr[i] = 0;
            if (arr[i])
                z++;
        }

        if (arr[0])
            z++;
        if (arr[size - 1])
            z++;

        cout << z << " " << o << endl;
    }
    return 0;
}