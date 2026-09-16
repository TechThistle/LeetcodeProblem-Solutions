class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> product(n, 1);
        for(int i = 1; i < n; i++)
        {
            product[i] = product[i-1] * nums[i-1];
        }
        int r= 1;
        for(int i = n-1; i >= 0; i--)
        {
            product[i] = product[i] * r;
            r= r* nums[i];
        }

        return product;
    }
};