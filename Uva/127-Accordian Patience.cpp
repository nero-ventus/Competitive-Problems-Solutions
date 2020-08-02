#include <bits/stdc++.h>
#define lo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

int main() {
    lo
    string ccard;
    vector<stack<string>> stacks;
    int ncards=0;
    while(cin >> ccard){
        if(ccard.compare("#")==0)  break;
        stack<string> staux;
        staux.push(ccard);
        stacks.push_back(staux);
        ncards++;
        if(ncards==52){
            for(int i=1; i<stacks.size(); i++){
                string saux1, saux2;
                if(i<3){
                    saux1=stacks[i-1].top(); saux2=stacks[i].top();
                    if(saux1[0]==saux2[0] or saux1[1]==saux2[1]){
                        stacks[i-1].push(saux2);
                        stacks[i].pop();
                        if(stacks[i].empty()){
                            stacks.erase(stacks.begin()+i);
                        }
                        i=0;
                    }
                }
                else{
                    saux1=stacks[i-3].top(); saux2=stacks[i].top();
                    if(saux1[0]==saux2[0] or saux1[1]==saux2[1]){
                        stacks[i-3].push(saux2);
                        stacks[i].pop();
                        if(stacks[i].empty()){
                            stacks.erase(stacks.begin()+i);
                        }
                        i=0;
                    }
                    else{
                        saux1=stacks[i-1].top(); saux2=stacks[i].top();
                        if(saux1[0]==saux2[0] or saux1[1]==saux2[1]){
                            stacks[i-1].push(saux2);
                            stacks[i].pop();
                            if(stacks[i].empty()){
                                stacks.erase(stacks.begin()+i);
                            }
                            i=0;
                        }
                    }
                }
            }
            if(stacks.size()==1){
                cout << "1 pile remaining: " << stacks[stacks.size()-1].size() << endl;
            }
            else{
                cout << stacks.size() << " piles remaining: ";
                for(int i=0; i<stacks.size()-1; i++){
                    cout << stacks[i].size() << " ";
                }
                cout << stacks[stacks.size()-1].size() << endl;
            }
            stacks.clear();
            ncards=0;
        }
    }
	return 0;
}
