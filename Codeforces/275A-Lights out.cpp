#include <bits/stdc++.h>
using namespace std;

int main() {
    int n=9;
    vector<int> numeros;
    while(n--){
        int aux; cin >> aux;
        numeros.push_back(aux);
    }
    vector<vector<int>> matriz {{1,1,1},{1,1,1},{1,1,1}};
    while(numeros[0]--){
        if(matriz[0][0]==1){
            matriz[0][0]=0;
        }
        else{
            matriz[0][0]=1;
        }
        if(matriz[0][1]==1){
            matriz[0][1]=0;
        }
        else{
            matriz[0][1]=1;
        }
        if(matriz[1][0]==1){
            matriz[1][0]=0;
        }
        else{
            matriz[1][0]=1;
        }
    }
    while(numeros[1]--){
        if(matriz[0][0]==1){
            matriz[0][0]=0;
        }
        else{
            matriz[0][0]=1;
        }
        if(matriz[0][1]==1){
            matriz[0][1]=0;
        }
        else{
            matriz[0][1]=1;
        }
        if(matriz[0][2]==1){
            matriz[0][2]=0;
        }
        else{
            matriz[0][2]=1;
        }
        if(matriz[1][1]==1){
            matriz[1][1]=0;
        }
        else{
            matriz[1][1]=1;
        }
    }
    while(numeros[2]--){
        if(matriz[0][1]==1){
            matriz[0][1]=0;
        }
        else{
            matriz[0][1]=1;
        }
        if(matriz[0][2]==1){
            matriz[0][2]=0;
        }
        else{
            matriz[0][2]=1;
        }
        if(matriz[1][2]==1){
            matriz[1][2]=0;
        }
        else{
            matriz[1][2]=1;
        }
    }
    while(numeros[3]--){
        if(matriz[0][0]==1){
            matriz[0][0]=0;
        }
        else{
            matriz[0][0]=1;
        }
        if(matriz[1][0]==1){
            matriz[1][0]=0;
        }
        else{
            matriz[1][0]=1;
        }
        if(matriz[1][1]==1){
            matriz[1][1]=0;
        }
        else{
            matriz[1][1]=1;
        }
        if(matriz[2][0]==1){
            matriz[2][0]=0;
        }
        else{
            matriz[2][0]=1;
        }
    }
    while(numeros[4]--){
        if(matriz[0][1]==1){
            matriz[0][1]=0;
        }
        else{
            matriz[0][1]=1;
        }
        if(matriz[1][0]==1){
            matriz[1][0]=0;
        }
        else{
            matriz[1][0]=1;
        }
        if(matriz[1][1]==1){
            matriz[1][1]=0;
        }
        else{
            matriz[1][1]=1;
        }
        if(matriz[1][2]==1){
            matriz[1][2]=0;
        }
        else{
            matriz[1][2]=1;
        }
        if(matriz[2][1]==1){
            matriz[2][1]=0;
        }
        else{
            matriz[2][1]=1;
        }
    }
    while(numeros[5]--){
        if(matriz[0][2]==1){
            matriz[0][2]=0;
        }
        else{
            matriz[0][2]=1;
        }
        if(matriz[1][2]==1){
            matriz[1][2]=0;
        }
        else{
            matriz[1][2]=1;
        }
        if(matriz[2][2]==1){
            matriz[2][2]=0;
        }
        else{
            matriz[2][2]=1;
        }
        if(matriz[1][1]==1){
            matriz[1][1]=0;
        }
        else{
            matriz[1][1]=1;
        }
    }
    while(numeros[6]--){
        if(matriz[2][0]==1){
            matriz[2][0]=0;
        }
        else{
            matriz[2][0]=1;
        }
        if(matriz[1][0]==1){
            matriz[1][0]=0;
        }
        else{
            matriz[1][0]=1;
        }
        if(matriz[2][1]==1){
            matriz[2][1]=0;
        }
        else{
            matriz[2][1]=1;
        }
    }
    while(numeros[7]--){
        if(matriz[1][1]==1){
            matriz[1][1]=0;
        }
        else{
            matriz[1][1]=1;
        }
        if(matriz[2][0]==1){
            matriz[2][0]=0;
        }
        else{
            matriz[2][0]=1;
        }
        if(matriz[2][1]==1){
            matriz[2][1]=0;
        }
        else{
            matriz[2][1]=1;
        }
        if(matriz[2][2]==1){
            matriz[2][2]=0;
        }
        else{
            matriz[2][2]=1;
        }
    }
    while(numeros[8]--){
        if(matriz[1][2]==1){
            matriz[1][2]=0;
        }
        else{
            matriz[1][2]=1;
        }
        if(matriz[2][1]==1){
            matriz[2][1]=0;
        }
        else{
            matriz[2][1]=1;
        }
        if(matriz[2][2]==1){
            matriz[2][2]=0;
        }
        else{
            matriz[2][2]=1;
        }
    }
    cout << matriz[0][0] << matriz[0][1] << matriz[0][2] << endl;
    cout << matriz[1][0] << matriz[1][1] << matriz[1][2] << endl;
    cout << matriz[2][0] << matriz[2][1] << matriz[2][2] << endl;
	return 0;
}
