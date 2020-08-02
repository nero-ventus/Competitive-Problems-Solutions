#include <bits/stdc++.h>
#define read_op ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

int main(){
    read_op
    int t, n0, n1, n2; cin >> t;
    while(t--){
        cin >> n0 >> n1 >> n2;
        string ans="";
        if(n1>0){
            ans+="0";
            while(n1--)
                if(ans[ans.size()-1]=='1') ans+="0";
                else ans+="1";
            if(n2>0)
                if(ans[ans.size()-1]=='1') while(n2--) ans+="1";
                else while(n2--) ans.insert(ans.size()-1, "1");
            if(n0>0)
                while(n0--) ans.insert(0,"0");
        }
        else if(n2>0){
            ans+="1";
            while(n2--) ans+="1";
        }
        else{
            ans+="0";
            while(n0--) ans+="0";
        }
        cout << ans << endl;
    }
    return 0;
}