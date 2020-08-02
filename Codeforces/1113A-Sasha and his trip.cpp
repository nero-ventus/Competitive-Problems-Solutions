#include <bits/stdc++.h>
#define lo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

void
sol(int &nc, int cc, int &res, int &t){
    res+=cc;
    if(nc-t==cc) return ;
    sol(nc, ++cc, res, t);
}

int main() {
    lo
    int nc, t; cin >> nc >> t;
    if(nc>t+1){
        int res=t;
        sol(nc, 2, res, t);
        cout << res << endl;
    }
    else{
        cout << nc-1 << endl;
    }
	return 0;
}