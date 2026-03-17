class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for(auto i : nums)
            count = (((int)log10(i) + 1) % 2) ? count : count + 1;
        return count;
    }
};