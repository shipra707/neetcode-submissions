class Solution {
public:
    int majorityElement(vector<int>& nums) {
      unordered_map<int,int>mp;
      for(int i=0;i<nums.size();i++){
        int num=nums[i];
        mp[num]++;
        if(mp[num]>nums.size()/2){
            return num;
        }
      }
      return -1;  
    }
};