class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int mini=nums[0];
        int start=0;
        int end=n-1;
        while(start<=end)
        {
            int mid=(start+end)/2;
            if(nums[start]==nums[mid] && nums[mid]==nums[end])
            {
                mini=min(mini, nums[start]);
                start++;
                end--;
            }
            else if(nums[start]<=nums[mid])
            {
                mini=min(mini, nums[start]);
                start=mid+1;
            }
            else
            {
                mini=min(mini, nums[mid]);
                end=mid-1;
            }
        }
        return mini;
    }
};