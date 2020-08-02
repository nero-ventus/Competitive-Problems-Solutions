#include <bits/stdc++.h>
#define lo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

int main() {
    lo
    int n;
    while(cin >> n){
        if(n==0) break;
        vector<long int> numbers;
        int aux;
        while(n--){
            cin >> aux;
            numbers.push_back(aux);
        }
        sort(numbers.begin(), numbers.end());
        long int res=0;
        while(numbers.size()>1){
            int aux=numbers[0];
            numbers.erase(numbers.begin());
            numbers[0]+=aux;
            res+=numbers[0];
            sort(numbers.begin(), numbers.end());
        }
        cout << res << endl;
    }
	return 0;
}
