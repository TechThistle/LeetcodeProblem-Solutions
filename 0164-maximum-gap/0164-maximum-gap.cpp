class Solution {
public:
    int maximumGap(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int maxi=0;
        for(int i=0; i<nums.size()-1; i++)
        {
            int diff=abs(nums[i]-nums[i+1]);
            maxi=max(maxi, diff);
        }
        return maxi;
    }
};