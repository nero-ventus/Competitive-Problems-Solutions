#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the largestRectangle function below.
typedef struct edificios{
    int first;
    int second;
} edi;
long largestRectangle(vector<int> h) {

    int n=h.size();
    edi st[1000002];
    int aux=h[0], top=0;
    st[0].first=aux;
    st[0].second=1;
    long int res=0;
    for(int i=1; i<n; i++){
        aux=h[i];
        if(st[top].first<=aux){
            if(st[top].first==aux){
                st[top].second++;
            }
            else{
                st[++top].first=aux;
                st[top].second=1;
            }
        }
        else{
            while(top>=0 and st[top].first>=aux){
                long int aux2=(long int)st[top].first*(long int)st[top].second;
                top--;
                if(st[top].first>=aux){
                    st[top].second+=st[top+1].second;
                }
                if(aux2>res){
                    res=aux2;
                }
            }
            top++;
            st[top].first=aux;
            st[top].second++;
        }
    }
    while(top>=0){
        long int aux2=(long int)st[top].first*(long int)st[top].second;
        st[--top].second+=st[top+1].second;
        if(aux2>res){
            res=aux2;
        }
    }
    return res;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string h_temp_temp;
    getline(cin, h_temp_temp);

    vector<string> h_temp = split_string(h_temp_temp);

    vector<int> h(n);

    for (int i = 0; i < n; i++) {
        int h_item = stoi(h_temp[i]);

        h[i] = h_item;
    }

    long result = largestRectangle(h);

    fout << result << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
