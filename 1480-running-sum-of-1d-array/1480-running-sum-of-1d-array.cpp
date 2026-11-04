class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        vector<int> result(n);
        result[0]=nums[0];
        for(int i=1; i<n; i++)
        {
            sum=result[i-1]+nums[i];
            result[i]=sum;
        }
        return result;
        
    }
};