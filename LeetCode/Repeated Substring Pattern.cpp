class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n=s.size();
        for(int i=1; i<=n/2; i++){
            if(n%i!=0) continue;
            string opc="", add=s.substr(0,i);
            for(int j=0; j<(n/i); j++) opc+=add;
            if(opc.compare(s)==0) return true;
        }
        return false;
    }
};