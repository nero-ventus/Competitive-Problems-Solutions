#include <bits/stdc++.h>
#define read_op ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

int main() {
    read_op
    int t, n; cin >> t;
    while(t--){
        cin >> n;
        int bande=0;
        for(int i=2; i<=sqrt(n); i++){
            if(n%i==0)
                for(int j=2; j<=sqrt(n/i); j++){
                    if((n/i)%j==0 and j!=i){
                        int aux=n/(i*j);
                        if(aux!=j and aux!=i and aux>1){
                            cout << "YES" << endl << i << " " << j << " " << aux << endl;
                            bande=1; break;
                        }
                    }
                }
            if(bande==1) break;
        }
        if(bande==0) cout << "NO" << endl;
    }
	return 0;
}