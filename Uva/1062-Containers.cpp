#include <bits/stdc++.h>
#define lo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

bool isTop(vector<stack<char>> stacks, char c){
    for(int i=0; i<30; i++){
        if(!stacks[i].empty()){
            if(stacks[i].top()==c){
                return true;
            }
        }
    }
    return false;
}

int countSt(vector<stack<char>> stacks){
    int res=0;
    for(int i=0; i<30; i++){
        if(!stacks[i].empty()){
            res++;
        }
    }
    return res;
}

int changeSt(vector<stack<char>> stacks, char c){
    int res=0, aux[30], top=-1;
    for(int i=0; i<30; i++){
        if(!stacks[i].empty()){
            if(stacks[i].top()>c){
                aux[++top]=i;
            }            
        }
    }
    if(top!=-1){
        res=aux[0];
        for(int i=1; i<=top; i++){
            if(stacks[res].top()>stacks[aux[i]].top()){
                res=aux[i];
            }
        }
        return res;
    }
    for(int i=0; i<30; i++){
        if(stacks[i].empty()){
            res=i;
            break;
        }
    }
    return res;
}

int main() {
    lo
    string s;
    int vez=1;
    while(cin >> s){
        if(s[0]=='e'){
            break;
        }
        vector<stack<char>> stacks(30);
        int cs=0;
        for(int i=0; i<s.size(); i++){
            //cout << isTop(stacks, s[i]) << "  " << s[i] << endl;
            if(isTop(stacks, s[i])==false){
                cs=changeSt(stacks, s[i]);
                stacks[cs].push(s[i]);
            }
        }
        int res=countSt(stacks);
        cout << "Case " << vez << ": " << res << endl;
        vez++;
        /*for(int i=0; i<30; i++){
            while(!stacks[i].empty()){
                cout << stacks[i].top() << " ";
                stacks[i].pop();
            }
            cout << endl;
        }*/
    }
	return 0;
}
