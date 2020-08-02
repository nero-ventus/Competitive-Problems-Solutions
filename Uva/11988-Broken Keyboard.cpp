#include <bits/stdc++.h>
#define lo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

typedef struct nd{
    char d;
    nd* left;
    nd* rigth;
    nd(char data){
        this->d = data;
        this->rigth = nullptr;
        this->left = nullptr;
    }
} nd;

nd* in(nd* h, char c){
    nd* aux=new nd(c);
    if(h==NULL){
        return aux;
    }
    h->rigth=aux;
    aux->left=h;
    return aux;
}

nd* ini(nd* h, char c){
    nd* aux=new nd(c);
    if(h->left==NULL){
        h->left=aux;
        aux->rigth=h;
        return aux;
    }
    h->left->rigth=aux;
    aux->left=h->left;
    h->left=aux;
    aux->rigth=h;
    return h;
}

int main() {
    lo
    string s;
    while(getline(cin, s)){
        int j=0;
        while(s[j]=='[' or s[j]==']'){
            j++;
        }
        nd* f=in(NULL, s[j]);
        nd* cn=f, * r=f;
        int aux=0, t=0;
        for(int i=j+1; i<s.size(); i++){
            char cc=s[i];
            if(cc=='[' or cc==']'){
                if(cc=='['){
                    t=1;
                }
                else{
                    t=0;
                }
                aux=0;
            }
            else{
                if(t==0){
                    r=in(r,cc);
                }
                else{
                    if(aux==0){
                        cn=f;
                        f=ini(f, cc);
                        aux++;
                    }
                    else{
                        cn=ini(cn, cc);
                    }
                }
            }
        }
        while(f!=NULL){
            cout << f->d;
            f=f->rigth;
        }
        cout << endl;
    }
	return 0;
}