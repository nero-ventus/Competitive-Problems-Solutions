#include <iostream>
using namespace std;

int main() {
    int casos=0;
    cin >> casos;
    while(casos--){
        int a=0, b=0, c=0, n=0;
        cin >> a >> b >> c >> n;
        int B=(n+a+c-2*b)/3;
        int A=b+B-a;
        int C=b+B-c;
        if((A+B+C)==n and (A+a)==(B+b) and (b+B)==(C+c) and A>=0 and B>=0 and C>=0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
	return 0;
}
