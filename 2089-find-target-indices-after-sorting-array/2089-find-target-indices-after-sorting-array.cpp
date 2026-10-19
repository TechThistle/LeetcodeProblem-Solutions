class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int> ans;
        int less=0;
        int equal=0;
        for(int i=0; i<n; i++)
        {
            if(nums[i]<target)
            {
                less++;
            }
            else if(nums[i]==target)
            {
                equal++;
            }
        }
        for(int i=0; i<equal; i++)
        {
            ans.push_back(less+i);
        }
        return ans;
        
    }
};