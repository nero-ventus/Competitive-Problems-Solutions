#include <bits/stdc++.h>
using namespace std;

vector<string> split_string(string);

// Complete the solve function below.
vector<int> solve(vector<int> arr, vector<int> queries) {
    int d; vector<int> res;
    for(int i=0; i<queries.size(); i++){
        d=queries[i]; int max=-1;
        for(int j=0; j<d; j++){
            if(arr[j]>max){
                max=arr[j];
            }
        }
        int min=max;
        for(int j=1; j<=arr.size()-d; j++){
            int aux=arr[j+d-1];
            if(aux>max){
                max=aux;
            }
            else{
                if(max==arr[j-1]){
                    max=-1;
                    for(int k=j; k<j+d; k++){
                        if(arr[k]>max){
                            max=arr[k];
                        }
                    }
                }
            }
            if(max<min){
                min=max;
            }
        }
        res.push_back(min);
    }
    return res;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string nq_temp;
    getline(cin, nq_temp);

    vector<string> nq = split_string(nq_temp);

    int n = stoi(nq[0]);

    int q = stoi(nq[1]);

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split_string(arr_temp_temp);

    vector<int> arr(n);

    for (int arr_itr = 0; arr_itr < n; arr_itr++) {
        int arr_item = stoi(arr_temp[arr_itr]);

        arr[arr_itr] = arr_item;
    }

    vector<int> queries(q);

    for (int queries_itr = 0; queries_itr < q; queries_itr++) {
        int queries_item;
        cin >> queries_item;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        queries[queries_itr] = queries_item;
    }

    vector<int> result = solve(arr, queries);

    for (int result_itr = 0; result_itr < result.size(); result_itr++) {
        fout << result[result_itr];

        if (result_itr != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

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
