class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int, int> prefix;
        int n=nums.size();
        prefix[0]=1;
        int count =0;
        int sum=0;
        for(int i=0; i<n; i++)
        {
            sum+=nums[i];
            if(prefix.find(sum-goal)!=prefix.end());
            {
                count+=prefix[sum-goal];
            }
            prefix[sum]++;
        }
        return count;
    }
};