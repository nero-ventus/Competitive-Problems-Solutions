#include <bits/stdc++.h>
#define lo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

int main() {
    lo
    int n; cin >>n;
    while(n--){
        char st[1002];
        int top=-1;
        string s;
        cin >> s;
        for(int i=0; i<s.size(); i++){
            char cc=s[i];
            if(cc=='(' or cc=='{' or cc=='['){
                st[++top]=cc;
            }
            else{
                if(st[top]=='(' and cc==')'){
                    top--;
                }
                else{
                    if(st[top]=='[' and cc==']'){
                        top--;
                    }
                    else{
                        if(st[top]=='{' and cc=='}'){
                            top--;
                        }
                        else{
                            st[++top]=cc;
                        }
                    }
                }
            }
        }
        if(top==-1){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
