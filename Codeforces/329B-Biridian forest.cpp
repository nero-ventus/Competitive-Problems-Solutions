#include <bits/stdc++.h>
#define lo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

typedef struct cell{
    char c;
    int v, tr, px, py;
} cell;

void dfs(vector<vector<cell>> &forest, queue<cell> &q, int &r, int &c){
    while(!q.empty()){
        int x=q.front().px, y=q.front().py; q.pop();
        if(x+1<r)
            if(forest[x+1][y].v==-1 and forest[x+1][y].c!='T'){
                forest[x+1][y].v=forest[x][y].v+1;
                q.push(forest[x+1][y]);
            }
        if(x-1>-1)
            if(forest[x-1][y].v==-1 and forest[x-1][y].c!='T'){
                forest[x-1][y].v=forest[x][y].v+1;
                q.push(forest[x-1][y]);
            }
        if(y+1<c)
            if(forest[x][y+1].v==-1 and forest[x][y+1].c!='T'){
                forest[x][y+1].v=forest[x][y].v+1;
                q.push(forest[x][y+1]);
            }
        if(y-1>-1)
            if(forest[x][y-1].v==-1 and forest[x][y-1].c!='T'){
                forest[x][y-1].v=forest[x][y].v+1;
                q.push(forest[x][y-1]);
            }
    }
}

int main() {
    lo
    int r, c; cin >> r >> c;
    cell caux; caux.c='N'; caux.v=-1; caux.tr=0;
    vector<cell> vaux(c, caux); vector<vector<cell>> forest(r, vaux);
    int ex, ey, sx, sy;
    char ca;
    for(int i=0; i<r; i++)
        for(int j=0; j<c; j++){
            cin >> ca;
            forest[i][j].px=i; forest[i][j].py=j;
            if(ca=='T' or ca=='E' or ca=='S'){
                forest[i][j].c=ca;
                if(ca=='E'){
                    ex=i; ey=j;
                }
                if(ca=='S'){
                    sx=i; sy=j;
                }
            }
            else{
                forest[i][j].tr=ca-'0';
            }
        }
    forest[ex][ey].v=0;
    queue<cell> q; q.push(forest[ex][ey]);
    dfs(forest, q, r, c); forest[ex][ey].v=0;
    int res=0;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            //cout << forest[i][j].v << " ";
            if(forest[i][j].v<=forest[sx][sy].v and forest[i][j].v>-1){
                res+=forest[i][j].tr;
            }
        }
        //cout << endl;
    }
    cout << res << endl;
	return 0;
}