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
    long long kthLargestLevelSum(TreeNode* root, int k) {
        vector<long long> sums;
        queue<TreeNode*> q;
        q.push(root);
        while(q.size()>0)
        {
            int n=q.size();
            long long levelsum=0;
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
        if(sums.size()<k)
        {
            return -1;
        }
        sort(sums.begin(), sums.end(), greater<long long>());
        return sums[k-1];
    }
};