#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int> botellas, abren;
	int nbotellas=0;
	cin >> nbotellas;
	int sin_abrir=nbotellas;
	while(nbotellas--){
	    int bot=0, abre=0;
	    cin >> bot >> abre;
	    botellas.push_back(bot);
	    abren.push_back(abre);
	}
	vector<int> usados;
	for(int i=0; i<botellas.size(); i++){
	    if(count(usados.begin(), usados.end(), abren[i])==0){
	        if(botellas[i]==abren[i] and count(abren.begin(), abren.end(), abren[i])<2){
	            sin_abrir-=(count(botellas.begin(), botellas.end(), abren[i])-1);
	        }
	        else{
	            sin_abrir-=count(botellas.begin(), botellas.end(), abren[i]);
	        }
	        usados.push_back(abren[i]);
	    }
	}
	cout << sin_abrir << endl;
	return 0;
}