class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        vector<int> ans;
        unordered_set<int> result;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(nums1[i]==nums2[j])
                {
                    result.insert(nums2[j]);
                }
            }
        }
        for(auto x: result)
        {
            ans.push_back(x);
        }
        return ans;
    }
};