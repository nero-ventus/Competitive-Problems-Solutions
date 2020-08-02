#include <bits/stdc++.h>
#define read_op ios_base::sync_with_stdio(false);cin.tie(NULL);
#define lli long long int
#define fs first
#define se second
#define p_b push_back
#define li long int
#define m_p make_pair
using namespace std;

int main(){
	read_op
	vector<int> kids(4,0);
	int h;
	cin >> kids[0] >> kids[1] >> kids [2] >> kids[3] >> h;
	sort(kids.begin(), kids.end());
	if(kids[3]+kids[1]+kids[2]>=h) cout << "WAW" << endl;
	else cout << "AWW" << endl;
	return 0;
}