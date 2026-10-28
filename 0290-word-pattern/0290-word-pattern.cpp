class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> v;
        string word="";
        for (int i=0; i<=s.size(); i++) 
        {
            if (i==s.size() || s[i]==' ') 
            {
                v.push_back(word);
                word="";
            } 
            else 
            {
                word+=s[i];
            }
        }
        if (pattern.size()!=v.size())
        return false;
        for (int i=0; i<pattern.size(); i++) 
        {
            for (int j=i+1; j<pattern.size(); j++) 
            {
                if (pattern[i]==pattern[j] && v[i]!=v[j])
                return false;
                if (pattern[i]!=pattern[j] && v[i]==v[j])
                return false;
            }
        }
        return true; 
    }
};