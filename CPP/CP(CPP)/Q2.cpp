#include <bits/stdc++.h>
using namespace std;

int main()
{

    int tc = 0;
    cin >> tc;
    while (tc--)
    {
        int size;
        cin >> size;
        int brick[size], largest = -1, index = -1;

        for (int i = 0; i < size; i++)
        {
            cin >> brick[i];
            if (brick[i] > largest)
            {
                largest = brick[i];
                index = i+1;
            }
        }

        cout << index << endl;
    }
}
