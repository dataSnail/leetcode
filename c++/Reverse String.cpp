class Solution {
public:
    string reverseString(string s) {
        char tem;
        for(int i =0;i<s.length()/2;i++){
            tem = s[s.length()-1-i];
            s[s.length()-1-i]=s[i];
            s[i]=tem;
        }
        return s;
    }
};