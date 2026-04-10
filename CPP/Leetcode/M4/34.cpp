class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        int l = 0, size = nums.size(), r = size - 1, mid;
        vector<int> res = {-1, -1};

        if (size == 0)
            return res;

        while (l <= r)
        {
            mid = (l + r) / 2;
            int t = nums[mid];

            if (t >= target)
                r = mid - 1;
            if (t < target)
                l = mid + 1;
        }

        if (l == size || nums[l] != target)
            return {-1, -1};

        res[0] = l;

        r = size - 1;

        while (l <= r)
        {
            mid = (l + r) / 2;
            int t = nums[mid];

            if (t <= target)
                l = mid + 1;
            if (t > target)
                r = mid - 1;
        }

        res[1] = r;

        return res;
    }
};