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
    
    int findD(TreeNode* root, int &x){
        if(root==NULL) return -9999;
        if(root->val==x){
            return 0;
        }
        int n1=findD(root->left, x)+1, n2=findD(root->right, x)+1;
        if(n1>n2){
            return n1;
        }
        return n2;
    }
    
    void findFather(TreeNode* root, int &x, TreeNode* &dad){
        if(root!=NULL){
            if(root->left!=NULL){
                if(root->left->val==x){
                    dad=root;
                }
                else{
                    findFather(root->left, x, dad);
                }
            }
            if(root->right!=NULL){
                if(root->right->val==x){
                    dad=root;
                }
                else{
                    findFather(root->right, x, dad);
                }
            }
        }
    }
    
    bool isCousins(TreeNode* root, int x, int y) {
        if(root==NULL) return false;
        TreeNode* da1=NULL,* da2=NULL;
        int d1=0, d2=0;
        findFather(root, x, da1);
        findFather(root, y, da2);
        d1=findD(root, x);
        d2=findD(root, y);
        if(d1==d2 and da1!=da2){
            return true;
        }
        return false;
    }
};