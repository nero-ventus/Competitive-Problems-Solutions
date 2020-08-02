#include <bits/stdc++.h>
#define lo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

int main() {
    lo
    int c; cin >> c;
    while(c--){
        int FL, nC; cin >> FL >> nC; FL*=100;
        queue<int> left, right;
        int l; string side;
        while(nC--){
            cin >> l >> side;
            if(side[0]=='l'){
                left.push(l);
            }
            else{
                right.push(l);
            }
        }
        side="left";
        int res=0;
        while(!left.empty() or !right.empty()){
            l=0;
            if(side[0]=='l'){
                while(!left.empty()){
                    if(l+left.front()<=FL){
                        l+=left.front();
                        left.pop();
                    }
                    else{
                        break;
                    }
                }
                side="right";
            }
            else{
                while(!right.empty()){
                    if(l+right.front()<=FL){
                        l+=right.front();
                        right.pop();
                    }
                    else{
                        break;
                    }
                }
                side="left";
            }
            res++;
        }
        cout << res << endl;
    }
	return 0;
}
