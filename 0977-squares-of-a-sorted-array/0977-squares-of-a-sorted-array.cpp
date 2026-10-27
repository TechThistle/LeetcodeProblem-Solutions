class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int> result(n);
        int leftsq, rightsq;
        int k=n-1;
        int l=0;
        int r=nums.size()-1;
        while(l<=r)
        {
            leftsq=nums[l]*nums[l];
            rightsq=nums[r]*nums[r];
            if(leftsq>rightsq)
            {
                result[k--]=leftsq;
                l++;
            }
            else
            {
                result[k--]=rightsq;
                r--;
            }
        
        }
        return result;
    }
   
};