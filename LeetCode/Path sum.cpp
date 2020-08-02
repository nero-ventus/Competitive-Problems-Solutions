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
    bool hasPathSum(TreeNode* root, int sum) {
        if(root==NULL) return false;
        int nsum=sum-(root->val);
        if(root->left==NULL and root->right==NULL){
            return nsum==0;
        }
        if(hasPathSum(root->right, nsum) or hasPathSum(root->left, nsum)){
            return true;
        }
        return false;
    }
};