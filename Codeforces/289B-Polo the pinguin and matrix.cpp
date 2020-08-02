#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, d; cin >> n >> m >> d;
    int t=n*m;
    vector<int> matriz;
    while(t--){
        int aux; cin >> aux;
        matriz.push_back(aux);
    }
    t=0;
    int max=0, min=0;
    for(int i=0; i<(matriz.size()-1);i++){
        if((matriz[i]-matriz[i+1])%d!=0){
            t=-1;
        }
    }
    if(t==-1){
        cout << t << endl;
    }
    else{
        int moves=0;
        sort(matriz.begin(), matriz.end());
        if((n*m)%2==0){
            int moves1=0;
            int moves2=0;
            t=(n*m)/2;
            for(int i=0; i<matriz.size(); i++){
                moves1+=(abs(matriz[i]-matriz[t]))/d;
            }
            t=((n*m)/2)-1;
            for(int i=0; i<matriz.size(); i++){
                moves2+=(abs(matriz[i]-matriz[t]))/d;
            }
            if(moves1<moves2){
                std::cout << moves1 << std::endl;
            }
            else{
                std::cout << moves2 << std::endl;
            }
        }
        else{
            int moves=0;
            t=(n*m)/2;
            for(int i=0; i<matriz.size(); i++){
                moves+=(abs(matriz[i]-matriz[t]))/d;
            }
            cout << moves << endl;
        }
    }
	return 0;
}