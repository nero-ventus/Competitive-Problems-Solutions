#include <bits/stdc++.h>
#define lo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
typedef struct ce{
    int x;
    int y;
} ce;

int mm(vector<vector<int>> &g, int &xi, int &yi, int &x, int &y){
    if(xi==x and yi==y){
        return 0;
    }
    queue<ce> q; int res=0, t=g.size();
    ce aux; aux.x=xi; aux.y=yi;
    q.push(aux);
    while(!q.empty()){
        aux=q.front();
        q.pop();
        xi=aux.x; yi=aux.y;
        res=g[xi][yi];
        if(xi+1<t){
            for(int i=xi+1; i<t; i++){
                if(g[i][yi]==0 or g[i][yi]>=res+1){
                    g[i][yi]=res+1;
                    aux.x=i; aux.y=yi;
                    q.push(aux);
                }
                else{
                    break;
                }
            }
        }
        if(yi+1<t){
            for(int i=yi+1; i<t; i++){
                if(g[xi][i]==0 or g[xi][i]>=res+1){
                    g[xi][i]=res+1;
                    aux.x=xi; aux.y=i;
                    q.push(aux);
                }
                else{
                    break;
                }
            }
        }
        if(xi-1>-1){
            for(int i=xi-1; i>-1; i--){
                if(g[i][yi]==0 or g[i][yi]>=res+1){
                    g[i][yi]=res+1;
                    aux.x=i; aux.y=yi;
                    q.push(aux);
                }
                else{
                    break;
                }
            }
        }
        if(yi-1>-1){
            for(int i=yi-1; i>-1; i--){
                if(g[xi][i]==0 or g[xi][i]>=res+1){
                    g[xi][i]=res+1;
                    aux.x=xi; aux.y=i;
                    q.push(aux);
                }
                else{
                    break;
                }
            }
        }
    }
    if(g[x][y]==0){
        res=-1;
    }
    else{
        res=g[x][y];
    }
    return res;
}

int main(){
    lo
    int n; cin >> n;
    vector<vector<int>> g;
    for(int i=0; i<n; i++){
        vector<int> r;
        for(int j=0; j<n; j++){
            char c; cin >> c;
            if(c=='.'){
                r.push_back(0);
            }
            else{
                r.push_back(-1);
            }
        }
        g.push_back(r);
    }
    int xi, yi, x, y; cin >> xi >> yi >> x >> y;
    cout << mm(g, xi, yi, x, y) << endl;
    return 0;
}
