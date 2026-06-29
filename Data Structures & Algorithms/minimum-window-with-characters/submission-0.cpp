class Solution {
public:
    string minWindow(string s, string t) {
       unordered_map<char,int>st;
       for(int i=0;i<t.size();i++){
        st[t[i]]++;}
       int left=0;
       int count=t.size();
       int minlength=INT_MAX;
       int start=0;
       for(int right=0;right<s.size();right++){
        if(st[s[right]]>0){
            count--;
        }
        st[s[right]]--;
        while(count==0){
            if(right-left+1<minlength){
            minlength=right-left+1;
            start=left;
        }
        st[s[left]]++;
        if(st[s[left]]>0){
            count++;
        }
        left++;
       }
       }
       if(minlength==INT_MAX){
            return "";
        }
        return s.substr(start,minlength);
    }
};
