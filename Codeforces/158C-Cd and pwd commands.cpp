#include <bits/stdc++.h>
#define lo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

int main(){
    lo
    int n; cin >> n;
    string command;
    vector<string> ruta;
    while(n--){
        cin >> command;
        if(command.compare("cd")==0){
            string cd, aux; cin >> cd;
            cd.push_back('/');
            if(cd[0]=='/'){
                ruta.clear();
                for(int i=1; i<cd.size(); i++){
                    if(cd[i]=='/'){
                        if(aux.compare("..")==0){
                            ruta.pop_back();
                        }
                        else{
                            ruta.push_back(aux);
                        }
                        aux.clear();
                    }
                    else{
                        aux.push_back(cd[i]);
                    }
                }
            }
            else{
                for(int i=0; i<cd.size(); i++){
                    if(cd[i]=='/'){
                        if(aux.compare("..")==0){
                            ruta.pop_back();
                        }
                        else{
                            ruta.push_back(aux);
                        }
                        aux.clear();
                    }
                    else{
                        aux.push_back(cd[i]);
                    }
                }
            }
        }
        else{
            cout << "/";
            for(int i=0; i<ruta.size(); i++){
                cout << ruta[i] << "/";
            }
            cout << endl;
        }
    }
	return 0;
}
