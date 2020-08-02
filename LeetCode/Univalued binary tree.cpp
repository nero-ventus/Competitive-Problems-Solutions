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
    bool isUnivalTree(TreeNode* root) {
        if(root==NULL) return true;
        if(root->left==NULL or root->right==NULL){
            if(root->left!=NULL and root->right==NULL){
                if(root->val==root->left->val){
                    return isUnivalTree(root->left);
                }
                else{
                    return false;
                }
            }
            if(root->left==NULL and root->right!=NULL){
                if(root->val==root->right->val){
                    return isUnivalTree(root->right);
                }
                else{
                    return false;
                }
            }
            return true;
        }
        else{
            if(root->val==root->left->val and root->val==root->right->val){
                if(isUnivalTree(root->right) and isUnivalTree(root->left)){
                    return true;
                }
            }
        }
        return false;
    }
};