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
	
	int n; cin >> n;
	
	unsigned lli aux; cin >> aux;
	vector<unsigned lli> ans;
	ans.p_b(aux);
	
	set<unsigned lli> nums;
	forx(n - 1, i){
	    cin >> aux;
	    nums.insert(aux);
	}
	
	while(1){
	    if(nums.find(ans[ans.size() - 1] * 2) != nums.end()){
	        nums.erase(ans[ans.size() - 1] * 2);
	        ans.p_b(ans[ans.size() - 1] * 2);
	    }
	    else if(ans[ans.size() - 1]%3 == 0 and nums.find(ans[ans.size() - 1] / 3) != nums.end()){
	        nums.erase(ans[ans.size() - 1] / 3);
	        ans.p_b(ans[ans.size() - 1] / 3);
	    }
	    else
	        break;
	}
	
	while(1){
	    if(ans[0]%2 == 0 and nums.find(ans[0] / 2) != nums.end()){
	        nums.erase(ans[0] / 2);
	        ans.insert(ans.begin(), ans[0] / 2);
	    }
	    else if(nums.find(ans[0] * 3) != nums.end()){
	        nums.erase(ans[0] * 3);
	        ans.insert(ans.begin(), ans[0] * 3);
	    }
	    else
	        break;
	}
	
	for(auto i : ans)
	    cout << i << " ";
    cout << endl;
	
	return 0;
}
