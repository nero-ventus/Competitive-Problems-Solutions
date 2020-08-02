#include <bits/stdc++.h>

using namespace std;

// Complete the matchingStrings function below.
vector<int> matchingStrings(vector<string> strings, vector<string> queries) {
    vector<pair<string, int>> c;
    for(int i=0; i<strings.size(); i++){
        int bande=0;
        for(int j=0; j<c.size(); j++){
            if(c[j].first==strings[i]){
                c[j].second++;
                bande++;
                break;
            }
        }
        if(bande==0){
            pair<string, int> aux;
            aux.first=strings[i];
            aux.second=1;
            c.push_back(aux);
        }
    }

    vector<int> res;
    for(int i=0; i<queries.size(); i++){
        int bande=0;
        for(int j=0; j<c.size(); j++){
            if(c[j].first==queries[i]){
                res.push_back(c[j].second);
                bande++;
                break;
            }
        }
        if(bande==0){
            res.push_back(0);
        }
    }

    return res;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int strings_count;
    cin >> strings_count;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<string> strings(strings_count);

    for (int i = 0; i < strings_count; i++) {
        string strings_item;
        getline(cin, strings_item);

        strings[i] = strings_item;
    }

    int queries_count;
    cin >> queries_count;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<string> queries(queries_count);

    for (int i = 0; i < queries_count; i++) {
        string queries_item;
        getline(cin, queries_item);

        queries[i] = queries_item;
    }

    vector<int> res = matchingStrings(strings, queries);

    for (int i = 0; i < res.size(); i++) {
        fout << res[i];

        if (i != res.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}
