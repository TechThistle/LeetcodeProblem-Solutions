class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n=candies.size();
        vector<bool> result;
        int maximum=0;
        for(int i=0; i<n; i++)
        {
            maximum=max(maximum, candies[i]);
        }
        for(int i=0; i<n; i++)
        {
            if(candies[i]+ extraCandies>=maximum)
            {
                result.push_back(true);
            }
            else
            {
                result.push_back(false);
            }
        }
        return result;


    }
};