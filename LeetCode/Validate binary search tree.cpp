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
    
    bool maxi(TreeNode* root, int &v){
        if(root==NULL) return true;
        if(root->val<v){
            if(maxi(root->left, v) and maxi(root->right, v)){
                return true;
            }
        }
        return false;
    }
    
    bool mini(TreeNode* root, int &v){
        if(root==NULL) return true;
        if(root->val>v){
            if(mini(root->left, v) and mini(root->right, v)){
                return true;
            }
        }
        return false;
    }
    
    bool isValidBST(TreeNode* root) {
        if(root==NULL) return true;
        if(root->left==NULL and root->right==NULL) return true;
        if(root->left==NULL or root->right==NULL){
            if(root->right==NULL){
                if(root->left->val<root->val and maxi(root->left, root->val)){
                    return isValidBST(root->left);
                }
            }
            if(root->left==NULL){
                if(root->right->val>root->val and mini(root->right, root->val)){
                    return isValidBST(root->right);
                }
            }
        }
        else{
            if(root->right->val>root->val and root->left->val<root->val){
                if(isValidBST(root->right) and isValidBST(root->left) and maxi(root->left, root->val) and mini(root->right, root->val)){
                    return true;
                }
            }
        }
        return false;
    }
};