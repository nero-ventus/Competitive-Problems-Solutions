#include <bits/stdc++.h>
#define lo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

int main() {
    lo
    int n, q, x, y; cin >> n;
    vector<int> d(n);
    for(int i=0; i<n; i++) cin >> d[i];
    cin >> q;
    while(q--){
        cin >> x >> y;
        int id=lower_bound(d.begin(), d.end(), (y-x))-d.begin();
        int id_res=-1, aux, dif_aux=y-x;
        for(int i=max(0, id-10); i<min(n, id+11); i++){
            aux=y-d[i];
            if(aux>0)
                if(dif_aux>abs(aux-x)){
                    dif_aux=abs(aux-x);
                    id_res=i;
                }
        }
        if(id_res==-1) cout << 0 << endl;
        else cout << id_res+1 << endl;
    }
	return 0;
}