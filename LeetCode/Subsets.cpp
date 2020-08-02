class Solution {
public:
    void sol(vector<vector<int>> &res, vector<int> opc, vector<int> &nums, int ci){
        for(int i=ci; i<nums.size(); i++){
            vector<int> nopc=opc;
            nopc.push_back(nums[i]);
            res.push_back(nopc);
            sol(res, nopc, nums, i+1);
        }
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> opc;
        res.push_back(opc);
        sol(res, opc , nums, 0);
        return res;
    }
};