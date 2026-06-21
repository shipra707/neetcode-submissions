class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        for(int i=0;i<n;i++){
            int product =1;
            for(int j=0;j<n;j++){
                // int left=0;
                // int right=nums[n-1];
                if(i==j){
                    continue;
                }
                else{
                    product *=nums[j];
                }
            }
            ans.push_back(product);
        }
        return ans;
    }
};
