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
    
    void dfs(vector<string> &res, TreeNode* root, string candi){
        if(root==NULL) return ;
        candi.append(to_string(root->val));
        if(root->left==NULL and root->right==NULL){
            res.push_back(candi);
            return ;
        }
        candi.append("->");
        if(root->left!=NULL) dfs(res, root->left, candi);
        if(root->right!=NULL) dfs(res, root->right, candi);
        return ;
    }
    
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> res;
        dfs(res, root, "");
        return res;
    }
};