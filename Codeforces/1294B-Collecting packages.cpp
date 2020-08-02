#include <bits/stdc++.h>
#define read_op ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

bool sol(int x, int y, int &xo, int &yo, string opc, string &opcf){
    if(xo<x or yo<y) return false;
    if(xo==x and yo==y){
        opcf=opc;
        return true;
    }
    string opc1=opc+"R", opc2=opc+"U";
    return (sol(x+1, y, xo, yo, opc1, opcf) or sol(x, y+1, xo, yo, opc2, opcf));
}

int main() {
    read_op
    int t, n, x, y; cin >> t;
    while(t--){
        cin >> n;
        vector<pair<int, int>> points(n);
        for(int i=0; i<n; i++) cin >> points[i].first >> points[i].second;
        sort(points.begin(), points.end());
        string opc="";
        x=0; y=0;
        int bande=0;
        for(int i=0; i<n; i++){
            string opcf="";
            if(sol(x, y, points[i].first, points[i].second, "", opcf)) opc+=opcf;
            else{
                bande=1;
                break;
            }
            x=points[i].first; y=points[i].second;
        }
        if(bande==0) cout << "YES" << endl << opc << endl;
        else cout << "NO" << endl;
    }
	return 0;
}
