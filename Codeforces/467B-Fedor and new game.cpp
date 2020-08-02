#include <bits/stdc++.h>
#define lo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

int main() {
    lo
    int n, m, k, fedor; cin >> n >> m >> k;
    vector<int> players(m, 0);
    for(int i=0; i<m; i++){
        cin >> players[i];
    }
    cin >> fedor;
    int res=0;
    for(int i=0; i<m; i++){
        int aux=fedor^players[i];
        if(__builtin_popcount(aux)<(k+1)) res++;
    }
    cout << res << endl;
	return 0;
}