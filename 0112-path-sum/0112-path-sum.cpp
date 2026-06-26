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
    bool solve(TreeNode* root, int sum, int targetSum)
    {
        if(root==NULL)
        {
            return false;
        }
        sum+=root->val;
        if(root->left==NULL && root->right==NULL)
        {
            return sum==targetSum;
        }
        if(solve(root->left, sum, targetSum))
        {
            return true;
        }
        if(solve(root->right, sum, targetSum))
        {
            return true;
        }
        return false;
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        return solve(root, 0, targetSum);
    }
};