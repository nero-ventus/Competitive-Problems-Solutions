#include <bits/stdc++.h>
#define lo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

bool isPrime(int n){ 
    if (n <= 1) 
        return false; 
    if (n <= 3) 
        return true; 
    if (n % 2 == 0 || n % 3 == 0) 
        return false; 
    for (int i = 5; i * i <= n; i = i + 6) 
        if (n % i == 0 || n % (i + 2) == 0) 
            return false;
    return true; 
}

int nPrime(int n) { 
    while(isPrime(n)==false){
        n++;
    }
    return n;
}

vector<vector<int>> waiter(vector<int> number, int q) {
    vector<vector<int>> res;
    int primo=2;
    while(q--){
        vector<int> aux, aux2;
        for(int i=number.size()-1; i>-1; i--){
            if(number[i]%primo==0){
                aux2.push_back(number[i]);
            }
            else{
                aux.push_back(number[i]);
            }
        }
        number=aux;
        primo=nPrime(primo+1);
        res.push_back(aux2);
    }
    res.push_back(number);
    return res;
}

int main(){
    lo
    int n, q; cin >> n >> q;
    vector<int> st;
    int aux;
    while(n--){
        cin >> aux;
        st.push_back(aux);
    }
    vector<vector<int>> res=waiter(st, q);
    for(int i=0; i<res.size(); i++){
        for(int j=res[i].size()-1; j>-1; j--){
            cout << res[i][j] << endl;
        }
    }
    return 0;
}
