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

void dfs(int &n, int &m, int cn, int cm, set<pair<int, int>> &visited, int ck, int cr, int &left, int &flag){
    if(!left or !(0 <= cn and cn < n  and 0 <= cm and cm < m) or visited.find({cn, cm}) != visited.end())
        return;
        
    visited.insert({cn, cm});
    
    if(ck){
        if(!cr)
            cout << 2 << " ";
        cout << cn + 1 << " " << cm + 1 << " ";
        cr++;
        if(cr == 2){
            cout << endl;
            cr = 0;
            ck--;
        }
        left--;
        dfs(n, m, cn + 1, cm, visited, ck, cr, left, flag);
        dfs(n, m, cn - 1, cm, visited, ck, cr, left, flag);
        dfs(n, m, cn, cm + 1, visited, ck, cr, left, flag);
        dfs(n, m, cn, cm - 1, visited, ck, cr, left, flag);
    }
    else{
        if(flag){
            cout << left << " ";
            flag = 0;
        }
        cout << cn + 1 << " " << cm + 1 << " ";
        left--;
        dfs(n, m, cn + 1, cm, visited, ck, cr, left, flag);
        dfs(n, m, cn - 1, cm, visited, ck, cr, left, flag);
        dfs(n, m, cn, cm + 1, visited, ck, cr, left, flag);
        dfs(n, m, cn, cm - 1, visited, ck, cr, left, flag);
    }
    return;
}

int main(){
	io_op
	
	int n, m, k; cin >> n >> m >> k;
	set<pair<int, int>> visited;
	int left = n * m;
	int flag = 1;
	
	dfs(n, m, 0, 0, visited, k - 1, 0, left, flag);
	cout << endl;
	
	return 0;
}
