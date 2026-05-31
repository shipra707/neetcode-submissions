class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> seen;
       for(int i=0;i<nums.size();i++){
        int current_num = nums[i];
        int needed=target-current_num;
        if(seen.count(needed)){
            return{seen[needed],i};
        }
        seen[current_num]=i;      
        }
        return {};
    }
};
