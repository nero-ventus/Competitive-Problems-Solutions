#include <bits/stdc++.h>
#define ol ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

int equalStacks(int h1[100005], int h2[100005], int h3[100005], int t1, int t2, int t3) {
    int res=0;
    if(t1==-1 or t2==-1 or t3==-1){
        return 0;
    }
    int s1=h1[t1--], s2=h2[t2--], s3=h3[t3--];
    while(t1!=-1 or t2!=-1 or t3!=-1){
        //cout << t1 << t2 << t3 << endl;
        if(s1==s2 and s2==s3){
            res=s1;
            if(t1==-1 or t2==-1 or t3==-1){
                break;
            }
            s1+=h1[t1--];
            s2+=h2[t2--];
            s3+=h3[t3--];
        }
        else{
            if((s1<s2 or s1<s3) and t1>-1){
                s1+=h1[t1--];
            }
            else{
                if((s2<s1 or s2<s3) and t2>-1){
                    s2+=h2[t2--];
                }
                else{
                    if((s3<s2 or s3<s1) and t3>-1){
                        s3+=h3[t3--];
                    }
                    else{
                        break;
                    }
                }
            }
        }
    }
    if(s1==s2 and s2==s3){
        res=s1;
    }
    return res;
}

int main(){
    ol
    int n1, n2, n3; cin >> n1 >> n2 >> n3;
    int h1[100005], h2[100005], h3[100005];
    for(int i=0; i<n1; i++){
        cin >> h1[i];
    }
    for(int i=0; i<n2; i++){
        cin >> h2[i];
    }
    for(int i=0; i<n3; i++){
        cin >> h3[i];
    }
    cout << equalStacks(h1, h2, h3, n1-1, n2-1, n3-1) << endl;
}
