class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        unordered_map<char, int> freq(s.size());

        for (auto i : s)
            freq[i]++;
        for (auto i : t)
        {
            freq[i]--;
            if (freq[i] == 0)
                freq.erase(i);
        }

        return (freq.empty()) ? true : false;
    }
};