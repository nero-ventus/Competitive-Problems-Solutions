#include <bits/stdc++.h>
#define lo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

int main() {
    lo
    int n; cin >> n;
    int aux; cin >> aux; n--;
    int max=aux, min=aux, res=0;
    while(n--){
        cin >> aux;
        if(aux>max){
            max=aux;
            res++;
        }
        if(aux<min){
            min=aux;
            res++;
        }
    }
    cout << res << endl;
	return 0;
}