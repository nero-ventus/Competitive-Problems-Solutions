#include <bits/stdc++.h>
#define lo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
 
int main() {
    lo
    deque<char> tape2, tape3;
    stack<char> tape1;
    int ts, lh, rh;
    cin >> ts >> lh >> rh;
    lh--;
    char aux;
    for(int i=0; i<ts; i++){
        cin >> aux;
        if(i<lh){
            tape1.push(aux);
        }
        else{
            if(i<rh){
                tape2.push_back(aux);
            }
            else{
                tape3.push_back(aux);
            }
        }
    }
    int q, bande=0; cin >> q;
    while(q--){
        cin >> aux;
        if(aux=='S'){
            cin >> aux;
            if(bande==0){
                if(aux=='L'){
                    cin >> aux;
                    if(aux=='L'){
                        tape2.push_front(tape1.top());
                        tape1.pop();
                    }
                    else{
                        tape1.push(tape2.front());
                        tape2.pop_front();
                    }
                    continue;
                }
                else{
                    cin >> aux;
                    if(aux=='L'){
                        tape3.push_front(tape2.back());
                        tape2.pop_back();
                    }
                    else{
                        tape2.push_back(tape3.front());
                        tape3.pop_front();
                    }
                    continue;
                }
            }
            else{
                if(aux=='L'){
                    cin >> aux;
                    if(aux=='L'){
                        tape2.push_back(tape1.top());
                        tape1.pop();
                    }
                    else{
                        tape1.push(tape2.back());
                        tape2.pop_back();
                    }
                    continue;
                }
                else{
                    cin >> aux;
                    if(aux=='L'){
                        tape3.push_front(tape2.front());
                        tape2.pop_front();
                    }
                    else{
                        tape2.push_front(tape3.front());
                        tape3.pop_front();
                    }
                    continue;
                }
            }
        }
        if(aux=='R'){
            if(bande==0){
                bande=1;
            }
            else{
                bande=0;
            }
            continue;
        }
        if(aux=='Q'){
            cin >> aux;
            if(bande==0){
                if(aux=='L'){
                    cout << tape2.front();
                }
                else{
                    cout << tape2.back();
                }
            }
            else{
                if(aux=='L'){
                    cout << tape2.back();
                }
                else{
                    cout << tape2.front();
                }
            }
            continue;
        }
    }
    cout << endl;
	return 0;
}