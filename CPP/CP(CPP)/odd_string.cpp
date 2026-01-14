#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool solve(string str, int size)
{
    unordered_map<char, int> freq;

    for (int i = 0; i < size; i++)
    {
        char c = str[i];
        freq[c]++;
        if (freq[c] > 2)
            return false;
    }
    return true;
}

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int size;
        string str;
        cin >> size;
        cin >> str;
        cout << (solve(str, size) ? "YES" : "NO") << endl;
    }
    return 0;
}
