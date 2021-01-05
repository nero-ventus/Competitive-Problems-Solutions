// 26
#include <bits/stdc++.h> //Include all c++ libraries
using namespace std;
#define io_op ios_base::sync_with_stdio(false);cin.tie(NULL); //IO Optimation
#define llli __int128_t
#define lli long long int
#define li long int
#define ld long double
#define pii pair<int, int>
#define pll pair<lli, lli>
#define m_p make_pair
#define fi first
#define se second
#define vint vector<int>
#define vli vector<li>
#define vlli vector<lli>
#define vpii vector<pii>
#define vpll vector<pll>
#define p_b push_back
#define all(v) v.begin(), v.end()
#define alla(arre, size) arre, arre + size
#define forv(v, i) for(int i=0; i<v.size(); i++) //For Vector
#define rforv(v, i) for(int i=v.size()-1; i>-1; i--) //For Reverse vector
#define forx(x, i) for(int i=0; i<x; i++) //For Number
#define showv(v, i) for(auto i:v) cout << i << ' '; //Display vector
#define npermute next_permutation
#define ppermute prev_permutation
// 4
int main(){
	io_op
	int t, n; cin >> t;
	while(t--){
		cin >> n;
		vpii gifts(n);
		int mcan=1e9+1, mora=1e9+1;
		forx(n,i){
			cin >> gifts[i].fi;
			if(gifts[i].fi<mcan) mcan=gifts[i].fi;
		}
		forx(n,i){
			cin >> gifts[i].se;
			if(gifts[i].se<mora) mora=gifts[i].se;
		}
		lli res=0;
		forx(n, i){
			int aux1=gifts[i].fi-mcan, aux2=gifts[i].se-mora;
			res+=min(aux1, aux2)+abs(aux1-aux2);
		}
		cout << res << endl;
	}
	return 0;
}
