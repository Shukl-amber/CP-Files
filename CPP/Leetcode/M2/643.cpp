class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int maxSum = 0;
        for (int i = 0; i < k; i++)
            maxSum += nums[i];
        
        int currentSum = maxSum;
        for (int i = k; i < nums.size(); i++)
        {
            currentSum = currentSum - nums[i - k] + nums[i];
            maxSum = max(maxSum, currentSum);
        }
        
        return (double)maxSum / k;
    }
};