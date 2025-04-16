#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(void)
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int days, flowers, min;
        cin >> flowers >> min >> days;
        int a[flowers], arr[flowers][3], bloomed = flowers, count = 0;
        for (int i = 0; i < flowers; i++)
        {
            cin >> a[i];
            arr[i][1] = 1;
            arr[i][2] = 0;
        }
        sort(a, a + flowers);
        for (int i = 0; i < flowers; i++)
            arr[i][0] = a[i];

        for (int day = 1; day <= days; day++)
        {
            for (int j = 0; j < flowers; j++)
            {
                if (arr[j][1] == 0 && arr[j][2] == day)
                {
                    arr[j][1] = 1;
                    bloomed++;
                }
            }

            if (bloomed > min)
            {
                for (int j = 0; j < flowers && bloomed > min; j++)
                {
                    if (arr[j][1] == 1)
                    {
                        arr[j][1] = 0;
                        bloomed--;
                        count++;
                        arr[j][2] = day + arr[j][0];
                    }
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}