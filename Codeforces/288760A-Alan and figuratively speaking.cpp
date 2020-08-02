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
	string s; cin >> s;
	for(int i=0; i<s.size(); i++)
		if(s[i]=='o' or s[i]=='O') s[i]='0';
		else if(s[i]=='i' or s[i]=='I') s[i]='1';
		else if(s[i]=='z' or s[i]=='Z') s[i]='2';
		else if(s[i]=='e' or s[i]=='E') s[i]='3';
		else if(s[i]=='a' or s[i]=='A') s[i]='4';
		else if(s[i]=='s' or s[i]=='S') s[i]='5';
		else if(s[i]=='g' or s[i]=='G') s[i]='6';
		else if(s[i]=='t' or s[i]=='T') s[i]='7';
		else if(s[i]=='b' or s[i]=='B') s[i]='8';
	cout << s << endl;
	return 0;
}

