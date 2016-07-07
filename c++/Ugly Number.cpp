class Solution {
public:
    bool isUgly(int num) {
        //偶数 各位数字之和模3为0 末尾是0或5(没必要)
        if(num<=0) return false;
        while(num%2==0) num/=2;
        while(num%3==0) num/=3;
        while(num%5==0) num/=5;
        if(num!=1) return false;
        return true;
    }
};