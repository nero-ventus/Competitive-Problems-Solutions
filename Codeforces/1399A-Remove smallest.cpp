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

bool can_move(vint &nums){
	for(int i=0, j=1; j<nums.size(); j++)
		if(abs(nums[i]-nums[j])<=1){
			if(nums[i]<nums[j]) nums.erase(nums.begin()+i);
			else nums.erase(nums.begin()+j);
			return true;
		}
	return false;
}

int main(){
	io_op
	int t, n; cin >> t;
	while(t--){
		cin >> n;
		vint nums(n);
		forx(n,i) cin >> nums[i];
		if(n==1){
			cout << "YES" << endl;
			continue;
		}
		sort(all(nums));
		while(can_move(nums));
		if(nums.size()==1) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
