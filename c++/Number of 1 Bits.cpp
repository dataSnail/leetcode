class Solution {
public:
    int hammingWeight(uint32_t n) {
        int result = 0;
        for(;n>0;n/=2){
            if(n%2!=0){//n&0x1
                result ++;
            }
        }
        return result;
    }
};