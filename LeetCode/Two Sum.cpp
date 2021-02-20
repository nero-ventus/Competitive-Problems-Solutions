class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> aux;
        for(int i=0; i<nums.size(); i++)
            for(int j=0; j<nums.size(); j++){
                if(i==j) continue;
                if(nums[i]+nums[j]==target){
                    aux.push_back(i);
                    aux.push_back(j);
                    return aux;
                }
            }
        return aux;
    }
};