#include <bits/stdc++.h>
#define lo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

vector<vector<char>> rotar(vector<vector<char>> c, int p){
    vector<char> aux(p,0);
    vector<vector<char>> res(p,aux);
    for(int i=0; i<p; i++){
        for(int j=0; j<p; j++){
            res[i][j]=c[p-j-1][i];
        }
    }
    return res;
}

int main() {
    lo
    int g, p;
    while(cin >> g >> p){
        if(g==0 and p==0){
            break;
        }
        int ga=g, pa=p;
        vector<vector<char>> cg, cp;
        string aux;
        while(ga--){
            cin >> aux;
            vector<char> ca;
            for(int i=0; i<g; i++){
                ca.push_back(aux[i]);
            }
            cg.push_back(ca);
        }
        while(pa--){
            cin >> aux;
            vector<char> ca;
            for(int i=0; i<p; i++){
                ca.push_back(aux[i]);
            }
            cp.push_back(ca);
        }
        int conta=4;
        int results[4], top=0;
        results[0]=0; results[1]=0; results[2]=0; results[3]=0;
        while(conta--){
            for(int i=0; i<=g-p; i++){
                for(int j=0; j<=g-p; j++){
                    int aux=0;
                    for(int k=0; k<p ; k++){
                        for(int l=0; l<p ; l++){
                            if(cg[i+k][j+l]!=cp[k][l]){
                                aux++;
                                break;
                            }
                        }
                        if(aux!=0){
                            break;
                        }
                    }
                    if(aux==0){
                        results[top]++;
                    }
                }
            }
            top++;
            cp=rotar(cp, p);
        }
        cout << results[0] << " " << results[1] << " " << results[2] << " " << results[3] << endl;
    }
	return 0;
}