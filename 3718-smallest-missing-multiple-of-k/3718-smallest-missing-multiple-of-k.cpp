class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int mul=k;
        while(true)
        {
            int i;
            for(i=0; i<nums.size(); i++)
            {
                if(nums[i]==mul)
                {
                    break;
                }
            }
            if(i==nums.size())
            {
                return mul;
            }
            mul+=k;
        }
    }
};