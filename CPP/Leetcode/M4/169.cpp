class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int count = 0, max = nums[0];
        for (auto e : nums)
        {
            if (count == 0)
                max = e;
            if (e == max)
                count++;
            else
                count--;
        }
    }
};