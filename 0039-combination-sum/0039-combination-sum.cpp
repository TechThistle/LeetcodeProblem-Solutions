class Solution {
public:
    void solve(vector<int> &candidates, int target,vector<int> &curr, vector<vector<int>> &ans, int idx)
    {
        if(target==0)
        {
            ans.push_back(curr);
            return;
        }
        if(idx==candidates.size() || target<0)
        {
            return;
        }
        curr.push_back(candidates[idx]);
        solve(candidates, target-candidates[idx], curr, ans, idx);
        curr.pop_back();
        solve(candidates, target, curr, ans, idx + 1);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target){
        vector<vector<int>> ans;
        vector<int> curr;
        solve(candidates, target, curr, ans, 0);
        return ans;
    }
};