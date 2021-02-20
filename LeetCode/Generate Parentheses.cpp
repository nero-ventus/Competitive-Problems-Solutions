class Solution {
public:
    
    void
    sol(vector<string> &ans, int l, int r, string opc, queue<char> q){
        if(l==0 and r==0){
            if(q.empty()) ans.push_back(opc);
            return;
        }
        if(q.empty()){
            if(l>0){
                string nopc=opc+'(';
                queue<char> nq=q;
                nq.push('(');
                sol(ans, l-1, r, nopc, nq);
            }
        }
        else{
            if(l>0){
                string nopc=opc+'(';
                queue<char> nq=q;
                nq.push('(');
                sol(ans, l-1, r, nopc, nq);
            }
            if(r>0){
                string nopc=opc+')';
                queue<char> nq=q;
                nq.pop();
                sol(ans, l, r-1, nopc, nq);
            }
        }
        return;
    }
    
    vector<string> generateParenthesis(int n) {
        queue<char> q;
        vector<string> ans;
        sol(ans, n , n, "", q);
        return ans;
    }
};