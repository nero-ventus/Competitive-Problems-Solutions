#include <bits/stdc++.h>
#define lo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

int main() {
    lo
    int n; cin >> n;
    while(n--){
        int m; cin >> m;
        vector<int> v(255,0);
        char c; int cv;
        while(m--){
            cin >> c >> cv;
            v[c]=cv;
        }
        cin >> m;
        double sum=0;
        string s; cin.ignore();
        while(m--){
            getline(cin, s);
            for(int i=0; i<s.size(); i++){
                sum+=v[s[i]];
            }
        }
        sum/=100.0;
        cout << fixed << setprecision(2) << sum << "$" << endl;
    }
	return 0;
}