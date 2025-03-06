#include <iostream>
using namespace std;
int main(void)
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int size, count = 0, totalcount = 0;

        cin >> size;

        int arr[size];

        for (int i = 0; i < size; i++)
            cin >> arr[i];

        for (int i = 0; i < size - 1; i++)
        {
            for (int j = i + 1; j < size; j++)
            {
                if (arr[j] == 2147483647-i)
                {
                    goto sskip;
                }

                if (arr[i] == arr[j])
                {
                    count++;
                    arr[j] = 2147483647-i;
                    break;
                }
                sskip:
            }
        }
        cout << count << endl;
    skip:;
    }
    return 0;
}