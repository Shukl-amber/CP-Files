#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int size;
        cin >> size;
        int mono[size], stereo[size];

        for (int i = 0; i < size; i++)
            cin >> mono[i];
        for (int i = 0; i < size; i++)
            cin >> stereo[i];

        int count = mono[size - 1];

        for (int i = 0; i < size - 1; i++)
        {
            if (mono[i] > stereo[i + 1])
            {
                count+=(mono[i]-stereo[i+1]);
            }
        }

        cout << count << endl;
    }
    return 0;
}