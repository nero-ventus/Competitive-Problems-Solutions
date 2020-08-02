#include <iostream>
using namespace std;

int main() {
    int a=0, b=0, n=0, i=0;
    cin >> a >> b >> n;
    while(i<10){
        if(((a*10+i))%b==0){
            a=a*10+i;
            break;
        }
        i++;
    }
    if(i==10){
        cout << "-1" << endl;
    }
    else{
        n--;
        cout << a;
        while(n--){
            cout << "0";
        }
        cout << endl;
    }
	return 0;
}
