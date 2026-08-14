class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int maxwater=0;
        int minht=0;
        int l=0;
        int r=n-1;
        while(l<r)
        {
            minht=min(height[l],height[r]);
            int width=r-l;
            int water=width*minht;
            maxwater=max(maxwater, water);
            if(height[l]<height[r])
            {
                l++;
            }
            else
            {
                r--;
            }
        }
        return maxwater;
    }
};