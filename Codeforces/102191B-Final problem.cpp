#include <bits/stdc++.h>
#define read_op ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

int main(){
	read_op
	int n, aux; cin >> n;
	vector<int> teams, problems;
	for(int i=0; i<n; i++){
		cin >> aux;
		teams.push_back(aux);
	}
	for(int i=0; i<10; i++){
		cin >> aux;
		problems.push_back(aux);
	}
	sort(teams.begin(), teams.end()); sort(problems.begin(), problems.end());
	if(teams[0]<problems[0]) cout << teams[0] << endl;
	else cout << "10" << endl;
	return 0;
}
