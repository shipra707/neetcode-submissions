class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=1;
        for(int i=1;i<nums.size();i++){
            bool isDuplicate=false;
            for(int j=0;j<k;j++){
                if(nums[i]==nums[j]){
                    isDuplicate=true;
                    break;
                }
            }
            if(!isDuplicate){
                nums[k]=nums[i];
                k++;
            }
        }
        return k;
    }
};