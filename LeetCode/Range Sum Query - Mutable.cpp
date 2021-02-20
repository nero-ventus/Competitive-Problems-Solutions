class NumArray {
private:
    vector<int> nume;
public:
    NumArray(vector<int>& nums) {
        nume=nums;
    }
    
    void update(int i, int val) {
        nume[i]=val;
        return;
    }
    
    int sumRange(int i, int j) {
        int res=0;
        for(; i<=j; i++)
            res+=nume[i];
        return res;
    }
};