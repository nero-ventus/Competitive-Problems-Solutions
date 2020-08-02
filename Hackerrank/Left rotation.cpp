#include <bits/stdc++.h>
#define lo ios_base::sync_with_stdio(false);cin.tie(NULL);

using namespace std;

int main(){
    lo
    int n, d; cin >> n >> d;
    d=d%n;
    vector<int> x;
    while(n--){
        int aux; cin >> aux;
        x.push_back(aux);
    }
    for(int i=d; i<x.size(); i++){
        cout << x[i] << " ";
    }
    for(int i=0; i<d; i++){
        cout << x[i] << " ";
    }
    cout << endl;
    return 0;
}
