class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n=nums.size();
        int maxi=INT_MIN;
        int mini=INT_MAX;
        for(int i=0; i<n; i++)
        {
            if(nums[i]>maxi)
            {
                maxi=nums[i];
            }
            if(nums[i]<mini)
            {
                mini=nums[i];
            }
        }
        vector<int> ans;
        for(int j=mini; j<=maxi; j++)
        {
            bool found=false;
            for(int i=0; i<n; i++)
            {
                if(nums[i]==j)
                {
                    found=true;
                    break;
                }
            }
            if(!found)
            {
                ans.push_back(j);
            }
        }  

        return ans;
    }
};