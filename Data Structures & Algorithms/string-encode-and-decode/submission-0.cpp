class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded="";
        for(int i=0;i<strs.size();i++){
            string s=strs[i];
            encoded += to_string(s.size())+"#"+s;
        }
        return encoded;
    }

    vector<string> decode(string s) {
        vector<string>arr;
        int i=0;
        while(i<s.size()){
            int j=i;
            while(s[j]!='#'){
                j++;
            }
            int len=stoi(s.substr(i,j-i));
            string str=s.substr(j+1,len);
            arr.push_back(str);
            i=j+1+len;
        }
        return arr;
 }
};
