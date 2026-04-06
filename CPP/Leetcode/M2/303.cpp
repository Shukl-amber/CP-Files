class NumArray
{
public:
    vector<int> arr, pre;
    NumArray(vector<int> &nums)
    {
        arr = nums;
        pre.resize(nums.size() + 1);
        pre[0] = 0;
        for (int i = 0; i < nums.size(); i++)
            pre[i + 1] = pre[i] + nums[i];
    }


    int sumRange(int left, int right)
    {
        return pre[right + 1] - pre[left];
    }
};
