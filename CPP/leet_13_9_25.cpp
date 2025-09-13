
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

class Solution
{
public:
    int maxFreqSum(string s)
    {
        map<char, int> vowels, consonants;
        int maxvow = 0, maxconsonants = 0;
        for (char i : s)
        {
            bool isVowel = false;
            switch (i)
            {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                vowels[i]++;
                isVowel = true;
                break;
            default:
                consonants[i]++;
                break;
            }
            if (isVowel)
            {
                if (vowels[i] > maxvow)
                    maxvow = vowels[i];
            }
            else
            {
                if (consonants[i] > maxconsonants)
                    maxconsonants = consonants[i];
            }
        }
        return maxconsonants + maxvow;
    }
};