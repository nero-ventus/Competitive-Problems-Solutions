#include <bits/stdc++.h>
#define lo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

bool allEven(stack<int> st){
    while(!st.empty()){
        if(st.top()%2!=0){
            return false;
        }
        st.pop();
    }
    return true;
}

bool allOdd(stack<int> st){
    while(!st.empty()){
        if(st.top()%2==0){
            return false;
        }
        st.pop();
    }
    return true;
}

int main(){
    lo
    int n; cin >> n;
    stack<int> st;
    int aux;
    cin >> aux; n--;
    st.push(aux);
    while(n--){
        cin >> aux;
        if(!st.empty()){
            if(st.top()==aux or st.top()%2==aux%2){
                st.pop();
            }
            else{
                st.push(aux);
            }
        }
        else{
            st.push(aux);
        }
    }
    if(allEven(st) or allOdd(st)){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
	return 0;
}