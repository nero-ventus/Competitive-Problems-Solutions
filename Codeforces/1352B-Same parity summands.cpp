#include <bits/stdc++.h>
#define read_op ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

int main() {
    read_op
    int t, n, k; cin >> t;
    while(t--){
        cin >> n >> k;
        if(k>n){
            cout << "NO" << endl;
            continue;
        }
        vector<int> mem;
        if(n%2==0){
            if(k%2==0){
                cout << "YES" << endl;
                while(k>1){
                    mem.push_back(1);
                    k--; n--;
                }
                mem.push_back(n);
                for(auto i:mem) cout << i << " ";
                cout << endl;
            }
            else{
                while(k>1){
                    mem.push_back(2);
                    k--; n-=2;
                }
                if(n>0){
                    cout << "YES" << endl;
                    mem.push_back(n);
                    for(auto i:mem) cout << i << " ";
                    cout << endl;
                }
                else cout << "NO" << endl;
            }
        }
        else if(k%2!=0){
            cout << "YES" << endl;
            while(k>1){
                mem.push_back(1);
                k--; n--;
            }
            mem.push_back(n);
            for(auto i:mem) cout << i << " ";
            cout << endl;
        }
        else cout << "NO" << endl; 
    }
	return 0;
}