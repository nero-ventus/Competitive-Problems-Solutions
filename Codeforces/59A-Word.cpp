#include <bits/stdc++.h>

using namespace std;

int main() {
    string s; cin >> s;
    int mayus=0, minus=0;
    for(auto i:s){
        if(i>64 and i<91){
            mayus++;
        }
        else{
            minus++;
        }
    }
    if(mayus>minus){
        for(int i=0; i<s.size(); i++){
            s[i]=toupper(s[i]);
        }
    }
    else{
        for(int i=0; i<s.size(); i++){
            s[i]=tolower(s[i]);
        }
    }
    cout << s << endl;
	return 0;
}