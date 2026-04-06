class Solution
{
public:
    int pivotIndex(vector<int> &nums)
    {
        int size = nums.size();
        vector<int> pre(size + 1);

        pre[0] = 0;
        for (int i = 0; i < size; i++)
            pre[i + 1] = pre[i] + nums[i];

        int total = pre[size];
        for (int i = 0; i < size; i++)
            if (pre[i] == total - pre[i + 1])
                return i;
        return -1;
    }
};