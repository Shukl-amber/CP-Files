#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int size,n, m, data, mid, st, en;
        cin >> size;

        int arr[size];

        for (int i = 0; i < size; i++)
            cin >> arr[i];

        sort(arr,arr+size);

        for (int i = 0; i < size - 1; i++)
        {
            st = i+1;
            en = size-1;
            mid = (st + en) / 2;
            data=(size-2)/arr[i];
            if ((data*arr[i])!=(size-2))
                goto sskip;

            while (en >= st)
            {
                if (arr[mid] == data)
                {
                    cout << arr[i] << " " << arr[mid] << endl;
                    goto skip;
                }
                else if (arr[mid] < data)
                {
                    st = mid + 1;
                    mid = (st + en) / 2;
                }
                else if (arr[mid] > data)
                {
                    en = mid - 1;
                    mid = (st + en) / 2;
                }
            }
        sskip:;
        }
    skip:;
    }
    return 0;
}