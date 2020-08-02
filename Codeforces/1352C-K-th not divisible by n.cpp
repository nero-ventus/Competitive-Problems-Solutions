#include <bits/stdc++.h>
#define lo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

int main() {
    lo
    int t, n, k; cin >> t;
    while(t--){
        cin >> n >> k;
        if(k<n){
            cout << k << endl;
        }
        else{
            k-=n-1;
            int res=n+n*(k/(n-1));
            k=k%(n-1);
            if(k==0){
                res--;
            }
            else{
                while(k--){
                    res++;
                }
            }
            cout << res << endl;
        }
    }
	return 0;
}