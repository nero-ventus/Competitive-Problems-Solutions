class Solution {
public:
    vector<int> prisonAfterNDays(vector<int>& cells, int N) {
        map<vector<int>, int> repe;
        for(int i=0; i<N; i++)
            if(repe.find(cells)==repe.end()){
                repe.insert({cells, i});
                vector<int> aux=cells;
                for(int i=1; i<7; i++)
                    if(cells[i-1]==cells[i+1]) aux[i]=1;
                    else aux[i]=0;
                cells=aux;
                cells[0]=0;
                cells[7]=0;
            }
            else
                return prisonAfterNDays(cells, (N-i)%(i-repe[cells]));
        return cells;
    }
};