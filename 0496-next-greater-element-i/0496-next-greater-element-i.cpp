class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        vector<int> result;
        for(int i=0; i<n; i++)
        {
            int p=nums1[i];
            int index=-1;
            for(int j=0; j<m; j++)
            {
                if(p==nums2[j])
                {
                for(int k=j+1; k<m; k++)
                {
                    if(nums2[k]>p)
                    {
                        index=nums2[k];
                        break;
                    }
                }
                break;
                }

                
            }
            result.push_back(index);
            
        }
        return result;
    }
};