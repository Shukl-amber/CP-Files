#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll size, querys, a, b, c;
    cin >> size >> querys;

    vector<ll> arr(size + 1, 0);

    for (ll i = 1; i <= size; i++)
    {
        ll temp;
        cin >> temp;
        arr[i] = arr[i - 1] + temp;
    }

    while (querys--)
    {
        cin >> a >> b >> c;

        if (a > b)
            swap(a, b);
        if (b > c)
            swap(b, c);
        if (a > b)
            swap(a, b);

        ll Max = max({arr[b] - arr[a - 1],
                      arr[c] - arr[a - 1],
                      arr[c] - arr[b - 1]});

        cout << Max << endl;
    }

    return 0;
}
