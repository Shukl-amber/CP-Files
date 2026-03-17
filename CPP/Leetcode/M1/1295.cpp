class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for(auto e : nums)
            count = (((int)log10(e) + 1) % 2) ? count : count + 1;
        return count;
    }
};