#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, aux="";
    cin >> s;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='.'){
            aux.push_back('0');
        }
        if(s[i]=='-' and s[i+1]=='.'){
            aux.push_back('1');
            i++;
        }
        if(s[i]=='-' and s[i+1]=='-'){
            aux.push_back('2');
            i++;
        }
    }
    cout << aux << endl;
	return 0;
}
