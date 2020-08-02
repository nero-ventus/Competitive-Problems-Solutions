#include <bits/stdc++.h>

using namespace std;

// Complete the isBalanced function below.
string isBalanced(string s) {
    char st[1010];
    int top=-1;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='(' or s[i]=='[' or s[i]=='{'){
            st[++top]=s[i];
        }
        else{
            if(s[i]==')'){
                if(st[top]=='('){
                    top--;
                }
                else{
                    st[++top]=')';
                }
            }
            if(s[i]==']'){
                if(st[top]=='['){
                    top--;
                }
                else{
                    st[++top]=']';
                }
            }
            if(s[i]=='}'){
                if(st[top]=='{'){
                    top--;
                }
                else{
                    st[++top]='}';
                }
            }
        }
    }
    if(top==-1){
        return "YES";
    }
    return "NO";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string s;
        getline(cin, s);

        string result = isBalanced(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
