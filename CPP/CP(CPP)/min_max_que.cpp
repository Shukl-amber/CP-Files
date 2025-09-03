#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll size, temp;
        cin >> size >> temp;
        vector<ll> arr(size);

        for (ll i = 0; i < size; i++)
            cin >> arr[i];

        ll front = arr[0], end = arr[0];

        for (ll i = 1; i < size; i++)
        {
            temp = arr[i];
            switch (i % 2)
            {
            case 0: 
                if (front > end)
                    end = temp;
                else
                    front = temp;
                break;
            case 1: 
                if (front > end)
                    front = temp;
                else
                    end = temp;
                break;
            }
        }
        cout << min(front, end) << endl;
    }
    return 0;
}
