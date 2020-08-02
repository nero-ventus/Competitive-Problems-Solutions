#include <bits/stdc++.h>
#define lo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

int main() {
    int n;
    while(cin >> n){
        if(n==0){
            break;
        }
        if(n==1){
            cout << "Discarded cards:" << endl;
            cout << "Remaining card: 1" << endl;
        }
        else{
            if(n==2){
                cout << "Discarded cards: 1" << endl;
                cout << "Remaining card: 2" << endl;
            }
            else{
                queue<int> deck;
                vector<int> discard;
                for(int i=1; i<=n; i++){
                    deck.push(i);
                }
                int last;
                while(!deck.empty()){
                    discard.push_back(deck.front());
                    deck.pop();
                    int aux=deck.front();
                    deck.pop();
                    deck.push(aux);
                    n--;
                    if(n==2){
                        discard.push_back(deck.front());
                        deck.pop();
                        last=deck.front();
                        deck.pop();
                    }
                }
                cout << "Discarded cards: ";
                for(int i=0; i<discard.size()-1; i++){
                    cout << discard[i] << ", ";
                }
                cout << discard[discard.size()-1] << endl;
                cout << "Remaining card: " << last << endl;
            }
        }
    }
	return 0;
}
