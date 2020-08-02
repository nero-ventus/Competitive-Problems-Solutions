#include <bits/stdc++.h>
#define lo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;


int main() {
    lo
    int p1[100005], p2[100005], top1=-1, top2=-1, q; cin >> q;
    while(q--){
        int opc; cin >> opc;
        if(opc==1){
            int x; cin >> x;
            p1[++top1]=x;
        }
        if(opc==2){
            for(int i=top1; i>0; i--){
                p2[++top2]=p1[i];
            }
            top1=-1;
            for(int i=top2; i>-1; i--){
                p1[++top1]=p2[i];
            }
            top2=-1;
        }
        if(opc==3){
            cout << p1[0] << endl;
        }
    }
    return 0;
}
