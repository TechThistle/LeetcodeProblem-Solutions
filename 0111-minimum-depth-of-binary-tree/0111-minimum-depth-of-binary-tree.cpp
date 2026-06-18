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
    int minDepth(TreeNode* root) {
        if(root==NULL)
        {
            return 0;
        }
        if(root->left==NULL) 
        {
            int leftht=minDepth(root->right) + 1;
            return leftht;
        }

        if(root->right == NULL) {
            int rightht=minDepth(root->left) + 1;
            return rightht;
        }

        return min(minDepth(root->left),minDepth(root->right)) + 1;
    }
};