#include <bits/stdc++.h>
#define lo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

int main() {
    lo
    int t, n; cin >> t;
    //Precomputo
    int cosa=25821;
    vector<int> cardsn(cosa);
    cardsn[0]=0; cardsn[1]=2;
    for(int i=2, j=1; i<cosa; i++){
        cardsn[i]=cardsn[i-1]+i*2+j;
        j++;
    }
    //
    
    while(t--){
        cin >> n;
        int i=0, res=0;
        while(1){
            i=upper_bound(cardsn.begin(), cardsn.end(), n)-cardsn.begin()-1;
            if(i<1) break;
            res++; n-=cardsn[i];
        }
        cout << res << endl;
    }
	return 0;
}