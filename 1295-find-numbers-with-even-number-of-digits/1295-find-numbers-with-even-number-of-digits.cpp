class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        for(int i=0; i<n; i++)
        {
            int num=nums[i];
            int ncount=0;
            while(num>0)
            {
                int a=num%10;
                ncount++;
                num=num/10;
            }
            if(ncount%2==0)
            {
                count++;
            }
        }
        return count;
    }
};