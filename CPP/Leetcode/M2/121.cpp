class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int pmin = INT_MAX, mprof = 0;
        for (auto i : prices)
        {
            pmin = min(i, pmin);
            if(i - pmin > mprof)
                mprof = i - pmin;
        }
        return mprof;
    }
};