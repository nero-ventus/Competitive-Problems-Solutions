#include <bits/stdc++.h>
#define lo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

typedef struct part{
    char type;
    char reach;
} part;

bool isPossible(vector<part> &leftw, vector<part> &rightw, int &n, int &j){
    if(n-j<0) return true;
    for(int i=n-j; i<n; i++){
        if(leftw[i].reach=='y' or rightw[i].reach=='y'){
            return true;
        }
    }
    return false;
}

void isReachable(vector<part> &leftw, vector<part> &rightw, int wH, int nH, int &n, int &j, char s){
    if(nH>=n) return ;
    if(s=='l'){
        if(nH+j<=n)
            if(rightw[nH+j].type!='X' and rightw[nH+j].reach=='n'){ 
                rightw[nH+j].reach='y';
                isReachable(leftw, rightw, wH+1, nH+j, n, j, 'r');
            }
        if(nH+1<=n)
            if(leftw[nH+1].type!='X' and leftw[nH+1].reach=='n'){
                leftw[nH+1].reach='y';
                isReachable(leftw, rightw, wH+1, nH+1, n, j, 'l');
            }
        if(nH-1>-1 and nH-1>wH+1)
            if(leftw[nH-1].type!='X' and leftw[nH-1].reach=='n'){ 
                leftw[nH-1].reach='y';
                isReachable(leftw, rightw, wH+1, nH-1, n, j, 'l');
            }
    }
    else{
        if(nH+j<=n)
            if(leftw[nH+j].type!='X' and leftw[nH+j].reach=='n'){ 
                leftw[nH+j].reach='y';
                isReachable(leftw, rightw, wH+1, nH+j, n, j, 'l');
            }
        if(nH+1<=n)
            if(rightw[nH+1].type!='X' and rightw[nH+1].reach=='n'){
                rightw[nH+1].reach='y';
                isReachable(leftw, rightw, wH+1, nH+1, n, j, 'r');
            }
        if(nH-1>-1 and nH-1>wH+1)
            if(rightw[nH-1].type!='X' and rightw[nH-1].reach=='n'){ 
                rightw[nH-1].reach='y';
                isReachable(leftw, rightw, wH+1, nH-1, n, j, 'r');
            }
    }
}

int main() {
    lo
    int n, j; cin >> n >> j;
    vector<part> leftw(n), rightw(n);
    part paux; paux.reach='n';
    for(int i=0; i<n; i++){
        cin >> paux.type;
        leftw[i]=paux;
    }
    for(int i=0; i<n; i++){
        cin >> paux.type;
        rightw[i]=paux;
    }
    leftw[0].reach='y';
    int naux=n-1;
    isReachable(leftw, rightw, -1, 0, naux, j, 'l');
    if(isPossible(leftw, rightw, n, j)){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
	return 0;
}