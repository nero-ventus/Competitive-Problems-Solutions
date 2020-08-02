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
#define forv(v, i) for(int i=0; i<v.size(); i++) //Vector for
#define rforv(v, i) for(int i=v.size()-1; i>-1; i--) //Reverse vector for
#define forx(x, i) for(int i=0; i<x; i++) //Num for
#define showv(v, i) for(auto i:v) cout << i << ' '; //Display vector
#define npermute next_permutation
#define ppermute prev_permutation

bool comparison(string &s, string opc){
	if(s.size()>opc.size()) return true;
	if(s.size()<opc.size()) return false;
	for(int i=s.size()-1; i>-1; i--)
		if(s[i]!=opc[i])
			if(s[i]=='1') return true;
			else return false;
	return false;
}

string make_opc(int &x){
	string res="1";
	forx(x-1,i) res+="0";
	return res;
}

int main(){
	io_op
	string s;
	cin >> s;
	int res=0, x=1;
	while(comparison(s, make_opc(x))){
		x+=2; res++;
	}
	cout << res << endl;
	return 0;
}
