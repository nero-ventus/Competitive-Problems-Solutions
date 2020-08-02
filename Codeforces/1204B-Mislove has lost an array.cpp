#include <bits/stdc++.h>
using namespace std;
auto n = 0, l = 0, r = 0, mini=0, maxi=0;
int main() {
    cin >> n >> l >> r;
    for(auto i=0; i<n; i++){
        if(i<l){
            mini+=pow(2,i);
        }
        else{
            mini+=1;
        }
    }
    for(auto i=0; i<n; i++){
        if(i<r){
            maxi+=pow(2,i);
        }
        else{
            maxi+=pow(2,(r-1));
        }
    }
    cout << mini << " " << maxi;
	return 0;
}