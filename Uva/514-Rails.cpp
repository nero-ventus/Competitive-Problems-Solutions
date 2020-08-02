#include <bits/stdc++.h>
#define lo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

int main() {
    lo
    int n;
    while(cin >> n){
        if(n==0){
            break;
        }
        int aux=n, aux2;
        vector<queue<int>> cases;
        queue<int> qaux;
        while(cin >> aux2){
            if(aux2==0){
                break;
            }
            if(aux!=1){
                aux--;
                qaux.push(aux2);
            }
            else{
                aux=n;
                qaux.push(aux2);
                cases.push_back(qaux);
                while(!qaux.empty()){
                    qaux.pop();
                }
            }
        }
        for(int i=0; i<cases.size(); i++){
            stack<int> station;
            for(int j=1; j<=n; j++){
                station.push(j);
                if(j==cases[i].front()){
                    while(!cases[i].empty() and !station.empty()){
                        if(cases[i].front()!=station.top()){
                            break;
                        }
                        cases[i].pop(); station.pop();
                    }
                }
            }
            if(station.empty()){
                cout << "Yes" << endl;
            }
            else{
                cout << "No" << endl;
            }
        }
        cout << endl;
    }
	return 0;
}
