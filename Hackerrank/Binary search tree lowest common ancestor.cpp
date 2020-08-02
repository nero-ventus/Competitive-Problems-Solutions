

/*The tree node has data, left child and right child 
class Node {
    int data;
    Node* left;
    Node* right;
};

*/
    bool findSon(Node *root, int &v, vector<Node*> &c){
        if(root==NULL) return false;
        c.push_back(root);
        if(root->data==v) return true;
        if(root->data>v) return findSon(root->left, v, c);
        return findSon(root->right, v, c);
    }

    Node *lca(Node *root, int v1,int v2) {
        vector<Node*> c1, c2;
        findSon(root, v1, c1);
        findSon(root, v2, c2);
        Node* res;
        int i=0;
        while(c1[i]==c2[i]){
            res=c1[i];
            if(i<c1.size()-1 and i<c2.size()-1){
                i++;
            }
            else{
                break;
            }
        }
        return res;
    }

