#include <bits/stdc++.h>
using namespace std;

int main() {
    int number; cin >> number;
    int flag=0;
    while(flag==0){
        number++;
        int flag2=0;
        string s=to_string(number);
        for(int i=0; i<s.size(); i++){
            if(count(s.begin(), s.end(), s[i])>1){
                flag2=1;
                break;
            }
        }
        if(flag2!=1){
            cout << number << endl;
            break;
        }
    }
	return 0;
}
