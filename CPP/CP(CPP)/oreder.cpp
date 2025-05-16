#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(void)
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int size;
        cin >> size;
        int arr[size];
        for (int i = 0; i < size; i++)
            cin >> arr[i];

        int forward = size - 1, backward = 0;
        bool flag = false;

        for (int i = 0; i < size; i++)
        {
            if (arr[i] != forward && arr[i] != backward)
            {
                flag = true;
                break;
            }
            else
            {
                backward++;
                forward--;
            }
        }
        if (flag)
            cout << 0 << endl;
        else
            cout << (ll)pow(2,size/2)%998244353 << endl;
    }
    return 0;
}