class Solution {
public:
    static bool compare(int num1, int num2){
    	stack<int> num1Stack;
    	stack<int> num2Stack;
    	int tem = num1;
    	int n1,n2;
    	if (tem < 10){
    		num1Stack.push(tem);
    	}
    	while (tem / 10 >= 1){
    		num1Stack.push(tem % 10);
    		tem /= 10;
    		if (tem < 10){
    			num1Stack.push(tem);
    		}
    	}
    	n1 =tem;
    	tem = num2;
    	if (tem < 10){
    		num2Stack.push(tem);
    	}
    	while (tem / 10 >= 1){
    		num2Stack.push(tem % 10);
    		tem /= 10;
    		if (tem < 10){
    			num2Stack.push(tem);
    		}
    	}
    	n2 = tem;
    	while (!num1Stack.empty() || !num2Stack.empty()){
    		if (num1Stack.top()>num2Stack.top()){
    			return true;
    		}
    		else if (num1Stack.top()<num2Stack.top()){
    			return false;
    		}
    		else{
    			num1Stack.pop();
    			num2Stack.pop();
    			if (num1Stack.empty() && !num2Stack.empty()){//1 空 2 不空
    				if (num2Stack.top()>n1){
    					return false;
    				}
    				else{
    					return true;
    				}
    			}
    			else if (!num1Stack.empty() && num2Stack.empty()){
    				if (num1Stack.top()>n2){
    					return true;
    				}
    				else{
    					return false;
    				}
    			}
    		}
    	}
    	return false;
    }
static bool compare2(int num1, int num2){
	int w1 = 1;
	int w2 = 1;
	int tem1 = num1;
	int tem2 = num2;
	while (num1 / 10 > 0){
		w1++;
		num1 /= 10;
	}
	while (num2 / 10 > 0){
		w2++;
		num2 /= 10;
	}

	if (tem1*pow(10, w2) + tem2 - tem2*pow(10, w1) - tem1 > 0){
		return true;
	}
	else{
		return false;
	}
}
    string largestNumber(vector<int>& nums) {
        stringstream ss;
        sort(nums.begin(), nums.end(), compare2);
        if(nums[0]==0)return "0";
        for(int i =0;i<nums.size();i++){
            ss<<nums[i];
        }
        return ss.str();
    }
};