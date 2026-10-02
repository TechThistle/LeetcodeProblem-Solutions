class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int left=0;
        int zcount=0;
        int maxlen=0;
        for(int right=0; right<n; right++)
        {
            if(nums[right]==0)
            {
                zcount++;
            }
            while(zcount>k)
            {
                if(nums[left]==0)
                {
                    zcount--;
                }
                left++;
            }
            int length=right-left+1;
            maxlen=max(maxlen,length);
        }
        return maxlen;
    }
};