#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

class Solution
{
public:
    int canBeTypedWords(string text, string brokenLetters)
    {
        int count = 0, flag = 1;
        for (char i : text)
        {
            if (i == ' ')
            {
                if (flag)
                    count++;
                flag = 1;
                continue;
            }
            if (flag)
            {
                for (char j : brokenLetters)
                {
                    if (i == j)
                    {
                        flag = 0;
                        break;
                    }
                }
            }
        }
        
        if (flag)
            count++;
        return count;
    }
};