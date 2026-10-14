class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n=s.size();
        vector<int> result(n);
        for(int i=0; i<n; i++)
        {
            int mini=INT_MAX;
            for(int j=0; j<n; j++)
            {
                if(s[j]==c)
                {
                    mini=min(mini, abs(i-j));
                }
            }
            result[i]=mini;
        }
        return result;
    }
};