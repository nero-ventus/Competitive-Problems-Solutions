#include <bits/stdc++.h>
#define read_op ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

int main() {
    read_op
    int t; cin >> t;
    string n;
    while(t--){
        cin >> n;
        vector<int> mem;
        for(int i=0, j=n.size()-1; i<n.size(); i++){
            if(n[i]-'0'!=0) mem.push_back((n[i]-'0')*pow(10,j));
            j--;
        }
        cout << mem.size() << endl;
        for(auto i:mem) cout << i << " ";
        cout << endl;
    }
	return 0;
}