class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size()){
            return false;
        }
        unordered_map<char,int>st;
        for(int i=0;i<s1.size();i++){
            st[s1[i]]++;
        }
        int left=0;
        int right=0;
        int count=s1.size();
        while(right<s2.size()){
            if(st[s2[right]]>0){
                count--;
            }
            st[s2[right]]--;
            right++;
            if(right-left==s1.size()){
                if(count==0){
                    return true;
                }
                if(st[s2[left]]>=0){
                    count++;
                }
                st[s2[left]]++;
                left++;
            }

        }
        return false;
    }
};
