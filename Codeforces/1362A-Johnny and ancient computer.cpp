#include <bits/stdc++.h>
#define lo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

int main() {
    lo
    int t; cin >> t;
    unsigned long long a, b;
    while(t--){
        cin >> a >> b;
        if(a==b){
            cout << 0 << endl;
            continue;
        }
        unsigned long long res=0;
        int bande=0;
        if(a<b){
            while(a<b){
                a <<= 1;
                res++;
                if(a==b){
                    bande=1;
                    break;
                }
            }
            if(bande==0) cout << -1 << endl;
            else{
                long long aux=res%3;
                long long aux2=aux%2;
                cout << (res/3+aux/2+aux2) << endl;
            }
        }
        else{
            while(a>b){
                if(a%2!=0) break;
                a >>= 1;
                res++;
                if(a==b){
                    bande=1;
                    break;
                }
            }
            if(bande==0) cout << -1 << endl;
            else{
                long long aux=res%3;
                long long aux2=aux%2;
                cout << (res/3+aux/2+aux2) << endl;
            }
        }
    }
	return 0;
}