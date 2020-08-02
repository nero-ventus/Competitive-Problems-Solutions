#include <bits/stdc++.h>
using namespace std;
 
int main() {
    unsigned long long int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<unsigned long int> letras {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    for(int i=0; i<n; i++){
        letras[s.at(i)-65]++;
    }
 
    sort(letras.begin(), letras.end(), greater<int>());
 
    unsigned long long int sum_max=0;
    unsigned long long int e_restantes=k;
    for(int i=0; e_restantes>0; i++){
        if(letras[i]>=e_restantes){
                sum_max+=e_restantes*e_restantes;
                e_restantes=0;
        }
        else{
                sum_max+=letras[i]*letras[i];
                e_restantes-=letras[i];
        }
    }
 
    cout << sum_max << endl;
    return 0;
}