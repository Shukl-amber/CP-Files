#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        int count = 0;
        bool isOn = false;
        while (n--)
        {
            int temp = 0;
            cin >> temp;
            if (temp < a && !isOn)
            {
                count++;
                isOn = true;
            }
            if (temp > b)
                isOn = false;
        }
        cout << count << endl;
    }
    return 0;
}
