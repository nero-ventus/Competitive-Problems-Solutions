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

int sol(int &s, vint ws){
	int res=0;
	for(int i=1; i<51; i++){
		if(ws[i]==0) continue;
		for(int j=1; j<51 and i+j<=s; j++){
			if(ws[j]==0) continue;
			if(i+j==s and i!=j){
				while(ws[i]>0 and ws[j]>0){
				    ws[i]--; ws[j]--; res++;
				}
			}
			if(i+j==s and i==j){
				while(ws[i]>1){
				    ws[i]-=2;res++;
				}
			}
		}
	}
	return res;
}

int main(){
	io_op
	int t, n, aux; cin >> t;
	while(t--){
		cin >> n;
		vint ws(51, 0);
		forx(n, i){
			cin >> aux;
			ws[aux]++;
		}
		if(n==1){
			cout << 0 << endl;
			continue;
		}
		int res=0;
		for(int i=2; i<101; i++){
			aux=sol(i, ws);
			if(aux>res) res=aux;
		}
		cout << res << endl;
	}
	return 0;
}
