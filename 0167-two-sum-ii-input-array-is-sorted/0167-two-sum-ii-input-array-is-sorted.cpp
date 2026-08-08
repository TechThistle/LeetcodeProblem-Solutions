class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> arr={-1,-1};
        int l=0;
        int r=numbers.size()-1;
        int sum;
        while(l<r)
        {
            sum=numbers[l]+numbers[r];
            if(target>sum)
            {l++;}
           else if(target<sum)
            {r--;}
           else {
           if(target==sum)
            {
                arr[0]=l+1;
                arr[1]=r+1;
                return arr;
            }}
        }
        return arr;
        
    }
};