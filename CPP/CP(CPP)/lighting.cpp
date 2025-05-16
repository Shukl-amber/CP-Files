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
        int red = 0, blue = 0, undef = 0;
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
            switch (arr[i])
            {
            case 0:
                undef++;
                break;
            case 1:
                red++;
                break;
            case 2:
                blue++;
                break;
            default:
                break;
            }
        }
        if(size%2!=0){
            cout << "NO" << endl;
            continue;
        }
        if (red == blue && undef % 2 == 0)
        {
            cout << "YES" << endl;
        }
        else if ((undef-(max(red,blue)-min(red,blue)))>=0 && (undef-(max(red,blue)-min(red,blue)))%2==0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}