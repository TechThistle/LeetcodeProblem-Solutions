class Solution {
public:
bool isvowel(char c)
        {
            return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
        }
    int maxVowels(string s, int k) {
        int n=s.length();
        int count=0;
        int maxcount=0;
        for(int i=0; i<k; i++)
        {
            if(isvowel(s[i]))
            {
                count++;
            }
        }
            maxcount =count;
            for(int i=k; i<n; i++)
            {
                if(isvowel(s[i-k]))
                {
                    count --;
                }
                if(isvowel(s[i]))
                {
                    count++;
                }
                maxcount=max(maxcount,count);
            }
        return maxcount;
        
    }
};