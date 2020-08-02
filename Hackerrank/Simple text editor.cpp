#include <bits/stdc++.h>
#define lo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;


int main() {
    lo
    char s[1000006];
    int m[1000006];
    vector<string> ms;
    int top=-1, topm=-1;
    int n; cin >> n;
    while(n--){
        int o; cin >> o;
        if(o==1){
            string aux; cin >> aux;
            for(int i=0; i<aux.size(); i++){
                s[++top]=aux[i];
            }
            m[++topm]=-aux.size();
            ms.push_back("");
        }
        if(o==2){
            int k; cin >> k;
            if((top-k)>-1){
                top-=k;
            }
            else{
                top=-1;
            }
            m[++topm]=k;
            string auxs;
            for(int i=1; i<=k; i++){
                auxs.push_back(s[top+i]);
            }
            ms.push_back(auxs);
        }
        if(o==3){
            int k; cin >> k;
            if(k-1<=top){
                cout << s[k-1] << endl;
            }
            else{
                cout << s[top] << endl;
            }
        }
        if(o==4){
            if(topm>-1){
                if(m[topm]>0){
                    for(int i=1; i<=ms[topm].size(); i++){
                        s[top+i]=ms[topm][i-1];
                    }
                }
                top+=m[topm];
                ms.erase(ms.end()-1);
                topm--;
            }
        }
    }
    return 0;
}
