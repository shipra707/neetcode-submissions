class Solution {
public:
    int characterReplacement(string s, int k) {
       unordered_map<char,int>st;
       int left=0;
       int ans=0;
       int maxfreq=0;
       for(int right=0;right<s.size();right++){
        st[s[right]]++;
        maxfreq=max(maxfreq,st[s[right]]);
        while((right-left+1)-maxfreq>k){
            st[s[left]]--;
            left++;
        }
        ans=max(ans,right-left+1);
       }
       return ans; 
    }
};
