class Solution {
public:
    vector<string> reorderLogFiles(vector<string>& logs) {
        vector<string> ans;
        vector<string> digit;
        vector<pair<string, int>> vaux;
        for(int i=0; i<logs.size(); i++){
            int j=0;
            while(logs[i][j]!=' ') j++;
            j++;
            if(logs[i][j]>47 and logs[i][j]<58) digit.push_back(logs[i]);
        }
        sort(logs.begin(), logs.end());
        for(int i=0; i<logs.size(); i++){
            int j=0;
            while(logs[i][j]!=' ') j++;
            j++;
            if(!(logs[i][j]>47 and logs[i][j]<58)) vaux.push_back(make_pair(logs[i].substr(j), i));
        }
        sort(vaux.begin(), vaux.end());
        for(int i=0; i<vaux.size(); i++) ans.push_back(logs[vaux[i].second]);
        for(int i=0; i<digit.size(); i++) ans.push_back(digit[i]);
        return ans;
    }
};