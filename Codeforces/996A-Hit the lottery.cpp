#include <bits/stdc++.h>
#define lo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

int backt(int n){
    if(n==0) return 0;
    int opc1=n-100, opc2=n-20, opc3=n-10, opc4=n-5, opc5=n-1;
    if(opc1>-1) return backt(opc1)+1;
    if(opc2>-1) return backt(opc2)+1;
    if(opc3>-1) return backt(opc3)+1;
    if(opc4>-1) return backt(opc4)+1;
    return backt(opc5)+1;
}

int main() {
    lo
    int n; cin >> n;
    cout << backt(n) << endl;
	return 0;
}