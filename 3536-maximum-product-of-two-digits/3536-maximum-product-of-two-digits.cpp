class Solution {
public:
    int maxProduct(int n) {
        vector<int> arr;
        int maxi=0;
        while(n>0)
        {
            int digit=n%10;
            arr.push_back(digit);
            n=n/10;
        }
        for(int i=0; i<arr.size(); i++)
        {
            int mul=1;
            for(int j=i+1; j<arr.size(); j++)
            {
                mul=arr[i]*arr[j];
                maxi=max(maxi,mul);
            }
        }
        return maxi;
    }
};