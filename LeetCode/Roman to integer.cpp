class Solution {
public:
    
    int letterToInt(char c){
        if(c=='I') return 1;
        if(c=='V') return 5;
        if(c=='X') return 10;
        if(c=='L') return 50;
        if(c=='C') return 100;
        if(c=='D') return 500;
        return 1000;
    }
    
    int romanToInt(string s) {
        int res=0, aux, aux2;
        for(int i=0; i<s.size(); i++){
            aux=letterToInt(s[i]);
            if(i+1<s.size()){
                aux2=letterToInt(s[i+1]);
                if(aux2>aux){
                    res+=aux2-aux;
                    i++;
                }
                else res+=aux;
            }
            else res+=aux;
        }
        return res;
    }
};