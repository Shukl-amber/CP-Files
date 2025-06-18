#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(void)
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll size;
        cin >> size;
        int arr[size];
        for (ll i = 0; i < size; i++)
            cin >> arr[i];

        do{
            bool sorted = true;
            for (ll i = 0; i < size ; i++)
            {
                if (arr[i] >= size)
                {
                    swap(arr[i], arr[i + 1]);
                    sorted = false;
                }
            }

        }while(!sorted);
    }
    return 0;
}