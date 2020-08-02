class Solution {
public:
    void sol(string candi, string &digits, int partida, vector<string> &solu){
        if(digits.size()==candi.size()){
            solu.push_back(candi);
            return ;
        }
        int i=partida;
        if(digits[i]=='2'){
            sol(candi+'a', digits, partida+1, solu);
            sol(candi+'b', digits, partida+1, solu);
            sol(candi+'c', digits, partida+1, solu);
        }
        if(digits[i]=='3'){
            sol(candi+'d', digits, partida+1, solu);
            sol(candi+'e', digits, partida+1, solu);
            sol(candi+'f', digits, partida+1, solu);
        }
        if(digits[i]=='4'){
            sol(candi+'g', digits, partida+1, solu);
            sol(candi+'h', digits, partida+1, solu);
            sol(candi+'i', digits, partida+1, solu);
        }
        if(digits[i]=='5'){
            sol(candi+'j', digits, partida+1, solu);
            sol(candi+'k', digits, partida+1, solu);
            sol(candi+'l', digits, partida+1, solu);
        }
        if(digits[i]=='6'){
            sol(candi+'m', digits, partida+1, solu);
            sol(candi+'n', digits, partida+1, solu);
            sol(candi+'o', digits, partida+1, solu);
        }
        if(digits[i]=='7'){
            sol(candi+'p', digits, partida+1, solu);
            sol(candi+'q', digits, partida+1, solu);
            sol(candi+'r', digits, partida+1, solu);
            sol(candi+'s', digits, partida+1, solu);
        }
        if(digits[i]=='8'){
            sol(candi+'t', digits, partida+1, solu);
            sol(candi+'u', digits, partida+1, solu);
            sol(candi+'v', digits, partida+1, solu);
        }
        if(digits[i]=='9'){
            sol(candi+'w', digits, partida+1, solu);
            sol(candi+'x', digits, partida+1, solu);
            sol(candi+'y', digits, partida+1, solu);
            sol(candi+'z', digits, partida+1, solu);
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string> solu;
        if(digits.compare("")!=0)
            sol("", digits, 0, solu);
        return solu;
    }
};