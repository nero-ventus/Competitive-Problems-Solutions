#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
    string horaM="";
    if(s[8]=='A'){
        if((s.substr(0,2).compare("12"))==0){
            horaM+="00";
            horaM+=s.substr(2,6);
        }
        else{
            horaM+=s.substr(0,8);
        }
    }
    else{
        if(s[8]=='P'){
            if((s.substr(0,2).compare("12"))==0){
                horaM+="12";
                horaM+=s.substr(2,6);
            }
            else{
                int horas=stoi(s.substr(0,2));
                horas+=12;
                horaM+=to_string(horas);
                horaM+=s.substr(2,6);
            }
        }
    }
    return horaM;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
