class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans;
        vector<int> cur;
        backtrack(candidates, target, 0, cur, ans);
        return ans;
    }

    void backtrack(vector<int>& candidates, int remain, int start, vector<int>& cur,
                   vector<vector<int>>& ans) {
        if (remain == 0) {
            ans.push_back(cur);
            return;
        }

        for (int i = start; i < candidates.size(); i++) {
            if (candidates[i] > remain)
                break;

            cur.push_back(candidates[i]);
            backtrack(candidates, remain - candidates[i], i, cur, ans);
            cur.pop_back();
        }
    }
};