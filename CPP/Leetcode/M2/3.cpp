class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int l = 0, r = 0, res = 0;
        unordered_map<char, int> last;
        for (int i = 0; i < s.size(); i++)
        {
            char k = s[i];
            if (last.find(k) != last.end())
                l = std::max(l, last[k] + 1);

            res = std::max(res, i - l + 1);
            last[k] = i;
        }
        return res;
    }
};