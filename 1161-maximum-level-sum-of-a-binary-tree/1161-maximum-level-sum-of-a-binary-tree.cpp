/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        vector<int> sums;
        queue<TreeNode*> q;
        q.push(root);
        while(q.size()>0)
        {
            int levelsum=0;
            int n=q.size();
            for(int i=0; i<n; i++)
            {
                TreeNode* curr=q.front();
                q.pop();
                levelsum+=curr->val;
                if(curr->left!=NULL)
                {
                    q.push(curr->left);
                }
                if(curr->right!=NULL)
                {
                    q.push(curr->right);
                }
            }
            sums.push_back(levelsum);
        }
        auto x=max_element(sums.begin(), sums.end());
        return (x-sums.begin())+1;
    }
};