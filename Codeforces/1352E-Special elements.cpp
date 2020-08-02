#include <bits/stdc++.h>
#define read_op ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

int main(){
    int t, n; cin >> t;
    while(t--){
        cin >> n;
        vector<int> nums(n,0);
        for(int i=0; i<n; i++) cin >> nums[i];
        if(n==1){
            cout << 0 << endl;
            continue;
        }
        int res=0;
        //Experimento
        for(int i=0; i<n; i++){
            int aux=nums[0];
            for(int r=1, l=0; r<n; r++){
                aux+=nums[r];
                if(aux==nums[i]){
                    res++; break;
                }
                else if(aux>nums[i]){
                    aux-=nums[l]; l++;
                    if(l==r){
                        aux=nums[r]; l=r;
                    }
                    else{
                        aux-=nums[r]; r--;
                    }
                }
            }
        }
        cout << res << endl;
    }
    return 0;
}