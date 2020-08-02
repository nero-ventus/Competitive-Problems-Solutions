#include <bits/stdc++.h>
#define lo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

typedef struct gs{
    int c;
    int dn;
} gs;

int truckTour(vector<gs> ci) {
    int res=0, t=ci.size(), bande=0;
    while(bande==0){
        bande=1;
        long int gt=0, dt=0;
        for(int i=res; i<t; i++){
            gt+=ci[i].c, dt+=ci[i].dn;
            if(dt>gt){
                res=i+1;
                bande=0;
                break;
            }
        }
    }
    return res;
}

int main(){
    lo
    int n; cin >> n;
    vector<gs> ci;
    gs aux;
    while(n--){
        int n1, n2; cin >> n1 >> n2;
        aux.c=n1;
        aux.dn=n2;
        ci.push_back(aux);
    }
    cout << truckTour(ci) << endl;
    return 0;
}
