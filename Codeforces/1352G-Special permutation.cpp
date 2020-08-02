#include <bits/stdc++.h>
#define read_op ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

int main(){
    read_op
    int t, n; cin >> t;
    while(t--){
        cin >> n;
        if(n<4){
            cout << -1 << endl;
            continue;
        }
        if(n%2==0) for(int i=n-1; i>0; i-=2) cout << i << " ";
        else for(int i=n; i>0; i-=2) cout << i << " ";
        cout << "4 2 ";
        for(int i=6; i<=n; i+=2) cout << i << " ";
        cout << endl;
    }
    return 0;
}