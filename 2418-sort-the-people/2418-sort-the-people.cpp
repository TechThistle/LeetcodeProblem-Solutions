class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n=heights.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if (heights[i]<heights[j]){
                    int temp=heights[i];
                    heights[i]=heights[j];
                    heights[j]=temp;
                    string s=names[i];
                    names[i]=names[j];
                    names[j]=s;
                }
            }
        }
        return names;
    }
};