class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> ans(num_people, 0);
        int curr=1;
        int idx=0;
        while (candies>0) 
        {
            int give=min(candies, curr);
            ans[idx]+=give;
            candies-=give;
            curr++;
            idx=(idx+1) % num_people;
        }
        return ans;
    }
};