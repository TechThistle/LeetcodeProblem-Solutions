class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int, int> prefix;
        prefix[0]=-1;
        int sum=0;
        for(int i=0; i<n; i++)
        {
            sum+=nums[i];
            int rem=sum%k;
            if(prefix.find(rem)!=prefix.end())
            {
                if(i-prefix[rem]>=2)
                {
                    return true;
                }
            }
            else
            {
                prefix[rem]=i;
            }
        }
        return false;
        
    }
};