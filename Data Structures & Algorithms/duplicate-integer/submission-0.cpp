class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> duplicate;
        for(int i=0;i<nums.size();i++){
            int num=nums[i];
            if(duplicate.count(num)){
                return true;
            }
            duplicate.insert(num);
        }
        return false;
    }
};