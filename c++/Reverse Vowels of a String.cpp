class Solution {
public:
    bool isVowel(const char s){
        return s=='a'||s=='e'||s=='i'||s=='o'||s=='u'||s=='A'||s=='E'||s=='I'||s=='O'||s=='U';
    }
    string reverseVowels(string s) {
        int i = 0;
        int j = s.size();
        char tem;
        while(i<j){
            if(!isVowel(s[i]))i++;
            if(!isVowel(s[j]))j--;
            if(isVowel(s[i])&&isVowel(s[j])){
                tem = s[i];
                s[i]=s[j];
                s[j]=tem;
                i++;
                j--;
            }
        }
        return s;
    }
};