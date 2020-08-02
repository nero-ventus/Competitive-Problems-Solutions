#include <bits/stdc++.h>
#define ol ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

int twoStacks(int x,int a[100005], int b[100005]) {
    int suma=0, res=0, ia=0, ib=0;
    while(a[ia]!=-1 and suma<=x){
        suma+=a[ia++];
    }
    if(suma>x){
        res=ia-1;
    }
    else{
        res=ia;
    }
    ia--;
    while(b[ib]!=-1){
        if(ia>-1){
            if(suma>x){
                suma-=a[ia--];
            }
            else{
                suma+=b[ib];
                if(suma<=x){
                    if((ia+ib+2)>res){
                        res=ia+ib+2;
                    }
                }
                ib++;
            }
        }
        else{
            suma+=b[ib];
            if(suma<=x){
                if((ib+1)>res){
                    res=ib+1;
                }
            }
            ib++;
        }
    }
    return res;
}

int main(){
    ol
    int n; cin >> n;
    while(n--){
        int na, nb, max, aux=0; cin >> na >> nb >> max;
        int a[100005], b[100005];
        while(na--){
            cin >> a[aux];
            aux++;
        }
        a[aux]=-1;
        aux=0;
        while(nb--){
            cin >> b[aux];
            aux++;
        }
        b[aux]=-1;
        cout << twoStacks(max, a, b) << endl;
    }
}
