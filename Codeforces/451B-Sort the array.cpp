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

int main(){
	io_op
	int n, l=0, r=0, aux=0;
	cin >> n;
	vint nums(n), snums;
	forx(n, i) cin >> nums[i];
	if(n<3){
		cout << "yes" << endl;
		if(n==1) cout << "1 1" << endl;
		else if(nums[0]<nums[1]) cout << "1 1" << endl;
		else cout << "1 2" << endl;
		return 0;
	}
	forx(n-1, i)
		if(nums[i]>nums[i+1] and aux==0) {
			l=i; aux=1;
		}
		else if(aux==1)
			if(nums[i]<nums[i+1]){
				r=i; break;
			}
			else r=i+1;
	forx(l, i) snums.p_b(nums[i]);
	for(int i=r; i>l-1; i--) snums.p_b(nums[i]);
	for(int i=r+1; i<n; i++) snums.p_b(nums[i]);
	int flag=0;
	forx(n-1, i)
		if(snums[i]>snums[i+1]){
			flag=1;
			break;
		}
	if(flag==0) cout << "yes" << endl << l+1 << " " << r+1 << endl;
	else cout << "no" << endl;
	return 0;
}
