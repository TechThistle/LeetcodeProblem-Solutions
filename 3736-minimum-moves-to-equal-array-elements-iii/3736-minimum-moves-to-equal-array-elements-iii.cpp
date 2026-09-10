class Solution {
public:
    int minMoves(vector<int>& nums) {
        int max=nums[0];
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]>max)
            {
                max=nums[i];
            }
            sum+=nums[i];
        }
        int ans=max*n-sum;
        return ans;
    }
};