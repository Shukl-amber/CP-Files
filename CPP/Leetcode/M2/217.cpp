class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        unordered_map<long long, int> ck;
        for (auto i : nums)
        {
            if (ck[i])
                return true;
            ck[i]++;
        }
        return false;
    }
};