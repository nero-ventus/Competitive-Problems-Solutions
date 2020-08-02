#include <bits/stdc++.h>
#define lo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

typedef struct nd{
    int d;
    nd* rigth;
    nd* left;
    nd(int data) {
        this->d = data;
        this->rigth = nullptr;
        this->left = nullptr;
    }
} nd;

nd* in(nd* ha, int a){
    nd* aux=new nd(a);
    if(ha==NULL){
        return aux;
    }
    aux->left=ha;
    ha->rigth=aux;
    return aux;
}

void inl(nd* ha, int a){
    nd* aux=new nd(a);
    if(ha->left==NULL){
        ha->left=aux;
        aux->rigth=ha;
        
    }
    else{
        ha->left->rigth=aux;
        aux->left=ha->left;
        aux->rigth=ha;
        ha->left=aux;
    }
}

void inr(nd* ha, int a){
    nd* aux=new nd(a);
    if(ha->rigth==NULL){
        ha->rigth=aux;
        aux->left=ha;
    }
    else{
        ha->rigth->left=aux;
        aux->rigth=ha->rigth;
        aux->left=ha;
        ha->rigth=aux;
    }
}

nd* ml(nd* cn){
    if(cn->left!=NULL){
        cn=cn->left;
    }
    return cn;
}

nd* mr(nd* cn){
    if(cn->rigth!=NULL){
        cn=cn->rigth;
    }
    return cn;
}

int main() {
    lo
    int n, p, a; cin >> n >> p >> a;
    nd* c=in(c, a);
    nd* cn=c;
    p--; n--;
    while(n--){
        cin >> a;
        c=in(c, a);
        if(p!=0){
            cn=c;
            p--;
        }
    }
    cin >> n;
    string s;
    while(n--){
        cin >> s;
        if(s.compare("print")==0) cout << cn->d << endl;
        if(s.compare("moveLeft")==0){
            cn=ml(cn);
        }
        if(s.compare("moveRight")==0){
            cn=mr(cn);
        }
        if(s.compare("insertLeft")==0){
            cin >> a;
            inl(cn, a);
        }
        if(s.compare("insertRight")==0){
            cin >> a;
            inr(cn, a);
        }
    }
	return 0;
}