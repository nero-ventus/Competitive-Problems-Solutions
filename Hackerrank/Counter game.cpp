#include <bits/stdc++.h>

using namespace std;

// Complete the counterGame function below.
string counterGame(long n) {
    if(n==1) return "Richard";
    bool w=true;
    while(n>1){
        if((n&(n-1))==0) n/=2;
        else{
            int power=0; long aux=n;
            while(aux!=0){
                power++; aux/=2;
            }
            n-=((long)1 << (power-1));
        }
        w=!w;
    }
    if(w){
        return "Richard";
    }
    return "Louise";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        long n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        string result = counterGame(n);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
