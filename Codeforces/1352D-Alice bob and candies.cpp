#include <bits/stdc++.h>
#define read_op ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

int main(){
    int t, n, aux; cin >> t;
    while(t--){
        cin >> n;
        deque<int> candies;
        while(n--){
            cin >> aux;
            candies.push_back(aux);
        }
        int limit=candies.front(), moves=1, a=candies.front(), b=0;
        candies.pop_front(); aux=0;
        bool turn=false;
        while(!candies.empty()){
            if(turn){
                while(aux<=limit and !candies.empty()){
                    aux+=candies.front();
                    candies.pop_front();
                }
                limit=aux;
                a+=aux;
            }
            else{
                while(aux<=limit and !candies.empty()){
                    aux+=candies.back();
                    candies.pop_back();
                }
                limit=aux;
                b+=aux;
            }
            turn=!turn; aux=0; moves++;
        }
        cout << moves << " " << a  << " " << b << endl; 
    }
    return 0;
}