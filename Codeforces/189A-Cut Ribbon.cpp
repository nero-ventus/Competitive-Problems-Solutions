#include <bits/stdc++.h>
#define lo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

void
sol(int i, vector<int> &v, vector<int> &res){
    if(i==4001) return ;
    int opc1=-1, opc2=-1, opc3=-1;
    if(i>=v[0])
        if(res[i-v[0]]!=-1) opc1=res[i-v[0]]+1;
    if(i>=v[1])
        if(res[i-v[1]]!=-1) opc2=res[i-v[1]]+1;
    if(i>=v[2])
        if(res[i-v[2]]!=-1) opc3=res[i-v[2]]+1;
    res[i]=max(opc1,opc2);
    res[i]=max(res[i], opc3);
    sol(++i, v, res);
}

int main() {
    lo
    int n; cin  >> n;
    vector<int> v(3), res(4001, -1);
    cin >> v[0] >> v[1] >> v[2];
    res[0]=0;
    sol(1, v, res);
    cout << res[n] << endl;
	return 0;
}