class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int missing=0;
        for(int num=0; num<=n; num++)
        {
            int count=0;
            for(int i=0; i<n; i++)
            {
                if(nums[i]==num)
                {
                    count++;
                }
            }
            if(count==0)
            {
                missing=num;
            }
        }
        return missing;
    }
};