class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
      int  min=INT_MAX;
       int maxdiff=0;
        for(int i=0; i<n; i++)
        {
           int current=prices[i];
            if(current>=min)
            {
                int profit=current-min;
                maxdiff=max(profit, maxdiff);
            }
            else
            {
                min=current;
            }
        }
        return maxdiff;
    }
};