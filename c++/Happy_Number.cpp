#include <iostream>

using namespace std;
bool isHappy(int n) {
    int sum = n;
    int hasNum[1000]={0};
    while(true){
        n=sum;
		sum=0;
		while(n!=0){
			sum+=(n%10)*(n%10);
			n /=10;
		}
        if(sum==1) return true;
        if(hasNum[sum]==1) return false;
		hasNum[sum]=1;
    }
}
int main(){
	int n;
	cin>>n;
	cout<<isHappy(n);
	
	return 0;
}