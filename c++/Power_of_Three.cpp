class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0) return false;
        if(n==1) return true;
        int a = log2(n)/log2(3);
        if(n-pow(3,a)==0) return true;
        else return false;
    }
};