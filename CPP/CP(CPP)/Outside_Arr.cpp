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

        ll arr[size],zeros=0;

        for (int i = 0; i < size; i++)
            cin >> arr[i],
            arr[i]==0 ? zeros++: 0;
        
        if (zeros == size)
        {
            cout << -1 << endl;
            continue;
        }
        if(size<=1)
        {
            cout << arr[0] << " " << arr[0] << endl;
            continue;
        }

        sort(arr, arr + size);

        ll max = arr[size - 1], min = arr[0], smax=arr[size-2], smin=arr[1];

        if
    }
    return 0;
}