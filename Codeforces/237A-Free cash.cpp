#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> numeros;
    while(n--){
        int aux1, aux2; cin >> aux1 >> aux2;
        numeros.push_back(aux1*100+aux2);
    }
    vector<int> usados, c_por_hora;
    for(int i=0; i<numeros.size(); i++){
        if(count(usados.begin(), usados.end(), numeros[i])==0){
            usados.push_back(numeros[i]);
            c_por_hora.push_back(count(numeros.begin(), numeros.end(), numeros[i]));
        }
    }
    sort(c_por_hora.begin(), c_por_hora.end(), greater<int>());
    cout << c_por_hora[0] << endl;
	return 0;
}