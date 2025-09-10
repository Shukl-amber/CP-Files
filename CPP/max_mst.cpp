#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll n, count = 0;
        cin >> n;

        vector<ll> arr;
        ll num;
        char c;
        while (cin >> num)
        {
            arr.push_back(num);
            c = cin.peek();
            if (c == '\n' || c == EOF)
                break;
        }

        ll size = arr.size();

        sort(arr.begin(), arr.end());

        ll temp = 1;

        for (ll i = 0; i < n - 1; i++)
        {
            size -= (n - temp);
            temp++;
            count += arr[size];
        }

        cout << count << endl;
    }
    return 0;
}