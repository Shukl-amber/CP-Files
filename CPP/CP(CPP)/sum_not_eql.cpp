#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll size, temp, flag = 1;
        cin >> size;

        vector<ll> arr(size);
        ll nonzero = -1;

        for (ll i = 0; i < size; i++)
        {
            cin >> temp;
            arr[i] = temp;
            if (temp != 0 && nonzero == -1)
                nonzero = i;
        }

        if (size < 3 || nonzero == -1)
        {
            printf("-1\n");
            continue;
        }

        ll i = nonzero, j = -1, k = -1;
        for (ll p = 0; p < size; p++)
        {
            if (p == i)
                continue;
            if (j == -1)
                j = p;
            else
            {
                k = p;
                break;
            }
        }

        while (flag)
        {
            if (arr[i] + arr[j] != arr[k])
            {
                printf("%lld %lld %lld\n", i + 1, j + 1, k + 1);
                break;
            }
            else if (arr[i] + arr[k] != arr[j])
            {
                printf("%lld %lld %lld\n", i + 1, k + 1, j + 1);
                break;
            }
            else if (arr[j] + arr[k] != arr[i])
            {
                printf("%lld %lld %lld\n", j + 1, k + 1, i + 1);
                break;
            }
            else
            {
                printf("-1\n");
                break;
            }
        }
    }
    return 0;
}
