class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int n=patterns.size();
        int ans=0;
        for(int i=0; i<n; i++)
        {
            string s=patterns[i];
            bool ok=false;
        for(int j=0; j+s.size()<=word.size(); j++)
        {
            int idx=0;
            while(idx<s.size())
            {
                if(word[j+idx]!=s[idx])
                {
                    break;
                }
                idx++;
            }
            if(idx==s.size())
            {
                ok=true;
                break;
            }
        }
        if(ok)
        {
            ans++;
        }
    }
    return ans;
    }
};