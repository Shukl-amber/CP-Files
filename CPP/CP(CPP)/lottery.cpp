#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        long long size;
        long long num = 0, it = 0;
        long long upper, lower;
        cin >> size;
        size += 2;
        long long arr[size];
        arr[0] = 0;
        arr[size - 1] = 1000001;
        for (long long i = 1; i < size - 1; i++)
            cin >> arr[i];
        long long chef = arr[1];
        sort(arr, arr + size);
        for (int i = 0; i < size; i++)
        {
            if (arr[i] == chef)
                it = i;
        }
        upper=arr[it+1];
        lower=arr[it-1];
        if (upper == 1000001){
            num += 1000000 - chef;
        }
        else
        {
            upper = arr[it + 1] - chef;
            num += upper / 2;
        }
        if (lower == 0)
            num += chef;
        else
        {
            lower = chef - arr[it - 1];
            num += lower / 2;
        }
        cout << num + 1  << endl;
    }
    return 0;
}