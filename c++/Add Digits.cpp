class Solution {
public:
	int sum = 0;
    int addDigits(int num) {
        if(num>=10)
        {
        	sum += num%10;
			addDigits(num/10);
        }else
        {
        	sum += num;
        }

        if(sum>=10)
        {
        	int tem = sum;
        	sum = 0;
        	addDigits(tem);
        }
        return sum;
    }
};