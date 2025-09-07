#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

class Solution
{
public:
    int longestCommonSubsequence(string text1, string text2)
    {
        int size1 = text1.size();
        int size2 = text2.size();

        vector<vector<int>> arr(size1 + 1, vector<int>(size2 + 1, 0));
        for (int i = 1; i <= size1; i++)
        {
            for (int j = 1; j <= size2; j++)
            {
                if (text1[i-1] == text2[j-1])
                    arr[i][j] = arr[i - 1][j - 1] + 1;
                else
                    arr[i][j] = max(arr[i - 1][j], arr[i][j - 1]);
            }
        }
        return arr[size1][size2];
    }
};