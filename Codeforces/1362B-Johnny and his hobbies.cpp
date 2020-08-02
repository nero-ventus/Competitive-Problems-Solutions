#include <bits/stdc++.h>
#define lo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

int main() {
    lo
    int t, n; cin >> t;
    while(t--){
        cin >> n;
        vector<int> nums(n);
        for(int i=0; i<n; i++) cin >> nums[i];
        sort(nums.begin(), nums.end());
        int bande2=0;
        for(int res=1; res<1025; res++){
            vector<int> vaux=nums;
            for(int i=0; i<n; i++) vaux[i]^=res;
            sort(vaux.begin(), vaux.end());
            int bande=0;
            for(int i=0; i<n; i++)
                if(vaux[i]!=nums[i]){
                    bande=1;
                    break;
                }
            if(bande==0){
                cout << res << endl;
                bande2=1;
                break;
            }
        }
        if(bande2==0) cout << -1 << endl;
    }
	return 0;
}