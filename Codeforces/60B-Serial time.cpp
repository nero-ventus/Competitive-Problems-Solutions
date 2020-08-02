#include <bits/stdc++.h>
#define lo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

void dfs(vector<vector<vector<int>>> &plate, int ck, int x, int y, int &res, int &k, int &n, int &m){
    if(ck>=k or ck<0) return ;
    if(plate[ck][x][y]==-1) return;
    if(plate[ck][x][y]==0){
        plate[ck][x][y]=1;
        res++;
        dfs(plate, ck-1, x, y, res, k, n, m);
    }
    dfs(plate, ck+1, x, y, res, k, n, m);
    if(x+1<n)
        if(plate[ck][x+1][y]==0){
            plate[ck][x+1][y]=1;
            res++;
            dfs(plate, ck, x+1, y, res, k, n, m);
            dfs(plate, ck+1, x+1, y, res, k, n, m);
            dfs(plate, ck-1, x+1, y, res, k, n, m);
        }
    if(x-1>-1)
        if(plate[ck][x-1][y]==0){
            plate[ck][x-1][y]=1;
            res++;
            dfs(plate, ck, x-1, y, res, k, n, m);
            dfs(plate, ck+1, x-1, y, res, k, n, m);
            dfs(plate, ck-1, x-1, y, res, k, n, m);
        }
    if(y+1<m)
        if(plate[ck][x][y+1]==0){
            plate[ck][x][y+1]=1;
            res++;
            dfs(plate, ck, x, y+1, res, k, n, m);
            dfs(plate, ck+1, x, y+1, res, k, n, m);
            dfs(plate, ck-1, x, y+1, res, k, n, m);
        }
    if(y-1>-1)
        if(plate[ck][x][y-1]==0){
            plate[ck][x][y-1]=1;
            res++;
            dfs(plate, ck, x, y-1, res, k, n, m);
            dfs(plate, ck+1, x, y-1, res, k, n, m);
            dfs(plate, ck-1, x, y-1, res, k, n, m);
        }
}

int main() {
    lo
    int k, n, m; cin >> k >> n >> m;
    vector<int> aux(m,0); vector<vector<int>> aux2(n,aux);
    vector<vector<vector<int>>> plate(k, aux2); char c;
    for(int i=0; i<k; i++)
        for(int j=0; j<n; j++)
            for(int p=0; p<m; p++){
                cin >> c;
                if(c=='#') plate[i][j][p]=-1;
            }
    int x, y, res=1; cin >> x >> y; x--; y--;
    plate[0][x][y]=1;
    dfs(plate, 0, x, y, res, k, n, m);
    cout << res << endl;
	return 0;
}