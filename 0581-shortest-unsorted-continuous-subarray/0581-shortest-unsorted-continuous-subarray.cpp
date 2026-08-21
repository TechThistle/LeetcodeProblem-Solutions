class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n=nums.size();
        int l=0;
        int r=n-1;
        while(l<r && nums[l]<=nums[l+1])
        {
            l++;
        }
        if(l==n-1)
        {
            return 0;
        }
        while(l<r && nums[r]>=nums[r-1])
        {
            r--;
        }
        int minimum=nums[l];
        int maximum=nums[r];
        for(int i=l; i<=r; i++)
        {
            if(nums[i]<minimum)
            {
                minimum=nums[i];
            }
            if(nums[i]>maximum)
            {
                maximum=nums[i];
            }
        }
        while(l>0 && nums[l-1]>minimum)
        {
            l--;
        }
        while(r<n-1 && nums[r+1]<maximum)
        {
            r++;
        }
        return r-l+1;
    }
};