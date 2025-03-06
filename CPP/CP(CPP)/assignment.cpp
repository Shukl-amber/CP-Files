#include <iostream>
using namespace std;
int main(void)
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int N, passing, count = 0,last;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
            count += arr[i];
        }

        passing = (N + 1) * 50;

        last=passing-count;
        if (last>100)
        {
            cout << -1 << endl;
        }
        else if (last<0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << last << endl;
        }
    }
    return 0;
}