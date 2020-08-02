#include <bits/stdc++.h>
#define lo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;


int main() {
    lo
    int n, top=-1, topm=-1; cin >> n;
    int st[100005], stm[100005];
    while(n--){
        int o; cin >> o;
        if(o==1){
            int aux; cin >> aux;
            st[++top]=aux;
            if(topm==-1){
                stm[++topm]=aux;
            }
            else{
                if(aux>=stm[topm]){
                    stm[++topm]=aux;
                }
            }
        }
        if(o==2){
            if(stm[topm]==st[top]){
                topm--;
            }
            top--;
        }
        if(o==3){
            cout << stm[topm] << endl;
        }
    }
    return 0;
}
