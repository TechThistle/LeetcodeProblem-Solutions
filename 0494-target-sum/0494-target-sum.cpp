class Solution {
public:
    int count=0;
    void solve(vector<int>& nums, int idx, int sum, int target) 
    {
        if(idx==nums.size()) 
        {
            if(sum==target) 
            {
                count++;
            }
            return;
        }
        solve(nums, idx+1, sum+nums[idx], target);
        solve(nums, idx+1, sum-nums[idx], target); 
    }
    int findTargetSumWays(vector<int>& nums, int target) 
    {
        solve(nums, 0, 0, target);
        return count;
    }
};