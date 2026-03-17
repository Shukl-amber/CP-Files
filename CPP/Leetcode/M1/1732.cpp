class Solution
{
public:
    int largestAltitude(vector<int> &gain)
    {
        int res = 0, curr = 0;
        for (auto e : gain)
        {
            curr += e;
            res = max(res,curr);
        }
        return res;
    }
};