class Solution {
public:
    int maxProfit(vector<int>& acciones) {
        int ganan = 0;
        if(!acciones.empty()){
            int min = acciones[0];
            for(int i=1; i<acciones.size(); i++){
                if(acciones[i]<min){
                    min=acciones[i];
                }
                if(acciones[i]-min>ganan){
                    ganan=acciones[i]-min;
                }
            }
        }
        return ganan;
    }
};