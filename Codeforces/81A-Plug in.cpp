#include <bits/stdc++.h>
#define lo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

int main() {
    lo
    char st[200005]; int top=-1;
    string aux; cin >> aux;
    st[++top]=aux[0];
    for(int i=1; i<aux.size(); i++){
        if(st[top]==aux[i]){
            top--;
        }
        else{
            st[++top]=aux[i];
        }
    }
    for(int i=0; i<=top; i++){
        cout << st[i];
    }
    cout << endl;
	return 0;
}