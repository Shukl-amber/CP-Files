#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll size, k;
        int closest = -1, dist = -1;
        cin >> size >> k;
        vector<ll> arr(size), check(size, INT_MAX);
        for (ll i = 0; i < size; i++)
        {
            cin >> arr[i];
            if (arr[i] && closest == -1)
                closest = i;
            if (closest != -1)
            {
                dist = abs(i - closest);
                if (dist != 0 && dist <= check[i])
                    check[i] = dist;
            }
            if (arr[i])
                closest = i;
        }

        closest = -1;
        for (int i = 0; i < size; i++)
        {
            int j = (size - 1) - i;
            if (arr[j] && closest == -1)
                closest = j;
            if (closest != -1)
            {
                dist = abs(j - closest);
                if (dist != 0 && dist <= check[j])
                    check[j] = dist;
            }
            if (arr[j])
                closest = j;
        }

        for (int i = 0; i < size; i++)
        {
            if (arr[i] == 1 && (check[i] > k || check[i] == INT_MAX))
                continue;
            else if (arr[i] == 0 && check[i] <= k)
                continue;
            else
            {
                closest = -1;
                break;
            }
        }

        if (closest == -1)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }
    return 0;
}
