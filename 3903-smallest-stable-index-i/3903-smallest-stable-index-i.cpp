class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        int idx=0;
        while (idx<n) 
        {
            int maxi=*max_element(nums.begin(), nums.begin()+idx+1);
            int mini=*min_element(nums.begin()+idx, nums.end());
            int score=maxi-mini;
            if(score<=k)
            {
                return idx;
            }
            idx++;
        }
        return -1;
    }
};