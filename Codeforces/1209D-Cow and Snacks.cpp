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

void dfs(unordered_map<int, vector<int>> &edges, vint &visited, int cn, int &hc){
    for(auto i : edges[cn]){
        if(!visited[i]){
            hc++;
            visited[i] = 1;
            dfs(edges, visited, i, hc);
        }
    }
    return;
}

int main(){
	io_op
	
	int n, k; cin >> n >> k;
	unordered_map<int, vector<int>> edges;
	vint visited(n, 0);
	
	forx(k, i){
	    int a, b; cin >> a >> b;
	    edges[a - 1].p_b(b - 1);
	    edges[b - 1].p_b(a - 1);
	}
	
	int hc = 0;
	
	forx(n, i)
	    if(!visited[i]){
	        visited[i] = 1;
	        dfs(edges, visited, i, hc);
	    }
	        
    cout << k - hc << endl;
	
	return 0;
}
