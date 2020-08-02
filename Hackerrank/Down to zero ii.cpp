#include <bits/stdc++.h>
#define lo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

void min(int n, vector<int> &vaux){
    if(vaux[n+1]==0 or vaux[n+1]>vaux[n]+1) vaux[n+1]=vaux[n]+1;
    for(int i=2; i<=n and i*n<=1000000; i++)
        if(vaux[i*n]==0 or vaux[i*n]>vaux[n]+1) vaux[i*n]=vaux[n]+1;
}

int main(){
    lo
    vector<int> vaux(1000006,0); vaux[1]=1;
    for(int i=1; i<1000001; i++)
        min(i, vaux);
    int q, aux; cin >> q;
    while(q--){
        cin >> aux;
        cout << vaux[aux] << endl;
    }
}
