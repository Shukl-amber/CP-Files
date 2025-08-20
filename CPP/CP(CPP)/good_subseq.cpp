#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {

        int size, count = 0, prev = -1;
        cin >> size;

        vector<int> arr(size);

        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
            if(!i){
                prev = arr[i]%2;
                count++;
            }
            else if(arr[i]%2 != prev){
                prev = arr[i]%2;
                count++;
            }
        }

        cout << count << endl;
    }
    return 0;
}
