class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        for(int i=0;i<strs.size();i++){
            string s=strs[i];
            vector<char> arr;
            for(int j=0;j<s.length();j++){
                arr.push_back(s[j]);
            }
            sort(arr.begin(),arr.end());
            string sorted="";
            for(int j=0;j<arr.size();j++){
                sorted+=arr[j];
            }
            if(mp.find(sorted)!=mp.end()){
                mp[sorted].push_back(s);
            }
            else{
                vector<string> temp;
                temp.push_back(s);
                mp[sorted]=temp;
            }
        }
        vector<vector<string>> ans;
        for(auto it = mp.begin(); it != mp.end(); it++) {
            ans.push_back(it->second);
        }
        return ans;
    }
};
