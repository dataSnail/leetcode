class Solution {
//http://www.cnblogs.com/little-YTMM/p/5448741.html
public:
    int maxNum(int a,int b){
        if(a>=b)return a;
        return b;
    }
    
    int longestValidParentheses(string s) {
        int max = 0;
        int start = -1;
        stack<int> stack_int;
        for(int i =0;i<s.length();i++)
        {
            if(s[i]=='('){
                stack_int.push(i);
            }else{
                if(stack_int.empty()){
                    start=i;
                }else{
                    stack_int.pop();
                    if(stack_int.empty()){
                        max=maxNum(max,i-start);
                    }else{
                        max=maxNum(max,i-stack_int.top());
                    }
                }
            }
        }
        return max;
    }
};