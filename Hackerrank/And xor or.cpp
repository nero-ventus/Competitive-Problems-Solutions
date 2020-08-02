#include <bits/stdc++.h>
#define lo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

int main(){
    lo
    int nums[1000006], topn=-1;
    int n; cin >> n;
    while(n--)
        cin >> nums[++topn];
    int smax=nums[0]^nums[1];
    int st[1000006], top=-1;
    for(int i=0; i<=topn; i++){
        while(top!=-1){
            int sa=st[top]^nums[i];
            if(sa>smax) smax=sa;
            if(nums[i]<st[top]) top--;
            else break;
        }
        st[++top]=nums[i];
    }
    cout << smax << endl;
    return 0;
}
