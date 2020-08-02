#include <bits/stdc++.h>
#define lo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

int main() {
    lo
    //Precomputo
    map<long long, long long> mapa;
    mapa[1]=1; mapa[0]=0;
    for(long long i=2; i<=1e18; i*=2){
        mapa[i]=mapa[i/2]*2+1;
    }
    //
    int t; cin >> t;
    long long n;
    while(t--){
        cin >> n;
        long long res=0, i=0;
        while(n>0){
            if(n&1) res+=mapa[pow(2,i)];
            i++;
            n>>=1;
        }
        cout << res << endl;
    }
	return 0;
}