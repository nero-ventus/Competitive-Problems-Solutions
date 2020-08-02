#include <bits/stdc++.h>
#define lo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

bool isPrime(int n){
    if (n <= 1) 
        return true;
    if (n <= 3) 
        return true;
    if (n % 2 == 0 || n % 3 == 0) 
        return false;
    for (int i = 5; i * i <= n; i = i + 6) 
        if (n % i == 0 || n % (i + 2) == 0) 
            return false;
    return true; 
}

void ans(vector<vector<int>> &res, int iaux, int n, vector<int> &numbers, vector<int> opc){
    if(n==1){
        res.push_back(opc);
        return ;
    }
    for(; iaux<numbers.size(); iaux++){
        if(n%numbers[iaux]==0 and (n/numbers[iaux]>=numbers[iaux] or n==numbers[iaux])){
            opc.push_back(numbers[iaux]);
            ans(res, iaux, n/numbers[iaux], numbers, opc);
            opc.pop_back();
        }
    }
}

int main() {
    lo
    int n;
    while(cin >> n){
        if(n==0) break;
        if(isPrime(n)){
            cout << 0 << endl;
        }
        else{
            vector<int> numbers;
            for(int i=2; i<=(int)sqrt(n); i++){
                if(n%i==0){
                    numbers.push_back(i);
                    if(i*i!=n){
                        numbers.push_back(n/i);
                    }
                }
            }
            sort(numbers.begin(), numbers.end());
            vector<vector<int>> opciones;
            vector<int> vaux;
            ans(opciones, 0, n, numbers, vaux);
            cout << opciones.size() << endl;
            for(int i=0; i<opciones.size(); i++){
                for(int j=0; j<opciones[i].size()-1; j++){
                    cout << opciones[i][j] << " ";
                }
                cout << opciones[i][opciones[i].size()-1] << endl;
            }
        }
    }
	return 0;
}
