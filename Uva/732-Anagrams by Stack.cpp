#include <bits/stdc++.h>
#define lo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

void opt(int t, string candi, int &maxTP, int topC, string &so, string &re, int topSo, stack<char> qaux, string saux){
    if(t==0){
        if(saux.compare(re)==0){
            for(int j=0; j<candi.size()-1; j++){
                cout << candi[j] << " ";
            }
            cout << candi[candi.size()-1] << endl;
            return ;
        }
    }
    else{
        for(int i=0; i<saux.size(); i++){
            if(saux[i]!=re[i]){
                return ;
            }
        }
        int bande=1;
        if(topSo+1<maxTP){
            candi[++topC]='i';
            qaux.push(so[++topSo]);
            opt(t-1, candi, maxTP, topC, so, re, topSo, qaux, saux);
            bande--;
        }
        if(bande==0){
            qaux.pop();
            topC--; topSo--;
        }
        if(!qaux.empty()){
            candi[++topC]='o';
            saux.push_back(qaux.top());
            qaux.pop();
            opt(t-1, candi, maxTP, topC, so, re, topSo, qaux, saux);
        }
    }
}

int main() {
    lo
    string so, re;
    while(cin >> so >> re){
        int t1=so.size(), t2=re.size();
        if(t1==t2){
            stack<char> qaux; qaux.push(so[0]);
            string candi(2*t1, ' '), saux; candi[0]='i';
            cout << "[" << endl;
            opt(2*t1-1, candi, t1, 0, so, re, 0, qaux, saux);
            cout << "]" << endl;
        }
        else{
            cout << "[" << endl;
            cout << "]" << endl;
        }
    }
	return 0;
}
