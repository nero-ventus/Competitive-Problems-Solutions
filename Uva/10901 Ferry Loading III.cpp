#include <bits/stdc++.h>
#define lo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

typedef struct car{
    int llegada;
    string lado;
    int tiempoT;
    car(int l, string s){
        this->llegada=l;
        this->lado=s;
        this->tiempoT=0;
    }
} car;

int main(){
    lo
    int n, maxCars, tarda, TotalCars; cin >> n;
    while(n--){
        cin >> maxCars >> tarda >> TotalCars;
        vector<car*> cars;
        int llega; string la;
        cin >> llega >> la;
        TotalCars--;
        car* caux=new car(llega, la);
        cars.push_back(caux);
        while(TotalCars--){
            cin >> llega >> la;
            caux=new car(llega, la);
            cars.push_back(caux);
        }
        int tempo=0;
        la="left";
        queue<car*> lefts, rights;
        for(int i=0;i<cars.size(); i++){
            if(cars[i]->lado.compare(la)==0){
                lefts.push(cars[i]);
            }
            else{
                rights.push(cars[i]);
            }
        }
        int carga=0;
        while(!lefts.empty() or !rights.empty()){
            if(la.compare("left")==0){
                //-----------------------------------------------
                carga=0;
                while(!lefts.empty() and carga<maxCars){
                    if(lefts.front()->llegada<=tempo){
                        carga++;
                        lefts.front()->tiempoT=tempo+tarda;
                        lefts.pop();
                    }
                    else{
                        break;
                    }
                }
                if(carga!=0){
                    tempo+=tarda;
                    la="right";
                }
                else{
                    if(!rights.empty()){
                        if(!lefts.empty()){
                            if(rights.front()->llegada>=lefts.front()->llegada){
                                tempo=lefts.front()->llegada;
                            }
                            else{
                                if(rights.front()->llegada<=tempo){
                                    tempo+=tarda;
                                }
                                else{
                                    tempo=rights.front()->llegada+tarda;
                                }
                                la="right";
                            }
                        }
                        else{
                            if(rights.front()->llegada<=tempo){
                                tempo+=tarda;
                            }
                            else{
                                tempo=rights.front()->llegada+tarda;
                            }
                            la="right";
                        }
                    }
                    else{
                        if(!lefts.empty()){
                            tempo=lefts.front()->llegada;
                        }
                        else{
                            break;
                        }
                    }
                }
                //-----------------------------------------------
            }
            else{
                //-----------------------------------------------
                carga=0;
                while(!rights.empty() and carga<maxCars){
                    if(rights.front()->llegada<=tempo){
                        carga++;
                        rights.front()->tiempoT=tempo+tarda;
                        rights.pop();
                    }
                    else{
                        break;
                    }
                }
                if(carga!=0){
                    tempo+=tarda;
                    la="left";
                }
                else{
                    if(!lefts.empty()){
                        if(!rights.empty()){
                            if(lefts.front()->llegada>=rights.front()->llegada){
                                tempo=rights.front()->llegada;
                            }
                            else{
                                if(lefts.front()->llegada<=tempo){
                                    tempo+=tarda;
                                }
                                else{
                                    tempo=lefts.front()->llegada+tarda;
                                }
                                la="left";
                            }
                        }
                        else{
                            if(lefts.front()->llegada<=tempo){
                                tempo+=tarda;
                            }
                            else{
                                tempo=lefts.front()->llegada+tarda;
                            }
                            la="left";
                        }
                    }
                    else{
                        if(!rights.empty()){
                            tempo=rights.front()->llegada;
                        }
                        else{
                            break;
                        }
                    }
                }
                //-----------------------------------------------
            }
        }
        for(int i=0; i<cars.size(); i++){
            cout << cars[i]->tiempoT << endl;
        }
        if(n!=0){
            cout << endl;
        }
    }
	return 0;
}
