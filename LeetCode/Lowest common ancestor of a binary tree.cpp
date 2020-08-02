/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool findSon(TreeNode* root, TreeNode* &v, vector<TreeNode*> &c){
        if(root==NULL) return false;
        if(root==v){
            c.push_back(root);
            return true;
        }
        if(findSon(root->left, v, c) or findSon(root->right, v, c)){
            c.push_back(root);
            return true;
        }
        return false;
    }
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*> c1, c2;
        findSon(root, p, c1);
        findSon(root, q, c2);
        TreeNode* res;
        
        /*for(int k=0; k<c1.size(); k++){
            cout << c1[k]->val << " ";
        }
        cout << endl;
        for(int k=0; k<c2.size(); k++){
            cout << c2[k]->val << " ";
        }
        cout << endl;*/
        
        int i=c1.size()-1, j=c2.size()-1;
        while(c1[i]==c2[j]){
            res=c1[i];
            if(i>0 and j>0){
                i--; j--;
            }
            else{
                break;
            }
        }
        return res;
    }
};