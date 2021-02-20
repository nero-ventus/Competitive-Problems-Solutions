class Solution {
public:
    
    bool isGood(string &s, vector<int> mem){
        for(int i=0; i<s.size(); i++)
            if(mem[s[i]]>0) mem[s[i]]--;
            else return false;
        return true;
    }
    
    int countCharacters(vector<string>& words, string chars) {
        int res=0;
        vector<int> mem(256, 0);
        for(int i=0; i<chars.size(); i++) mem[chars[i]]++;
        for(int i=0; i<words.size(); i++)
            if(isGood(words[i], mem)) res+=words[i].size();
        return res;
    }
};