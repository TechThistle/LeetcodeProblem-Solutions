class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        int alt=0;
        int sum=0;
        for(int i=0; i<n; i++)
        {
            sum+=gain[i];
            alt=max(sum, alt);

        }
        return alt;
        
    }
};