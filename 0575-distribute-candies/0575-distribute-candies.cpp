class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_set<int> result;
        for(int x: candyType)
        {
            result.insert(x);
        }
        int n=result.size();
        int minicandy= candyType.size()/2;
        int ans=min(n, minicandy);
        return ans;
    }
};