#include <bits/stdc++.h>
#define lo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

int main() {
    lo
    int n; cin >> n;
    vector<int> students(n);
    for(int i=0; i<n; i++) cin >> students[i];
    sort(students.begin(), students.end());
    int res=1, aux=1;
    for(int i=0, j=1; i<n and j<n; j++){
        if(students[j]-students[i]<6) aux++;
        else{
            if(aux>res) res=aux;
            i++; aux--; j--;
        }
    }
    if(aux>res) res=aux;
    cout << res << endl;
	return 0;
}