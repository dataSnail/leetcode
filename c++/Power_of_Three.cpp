#include <iostream>
#include <cmath>

using namespace std;
int main(){
	int a = log2(243)/log2(3);
	cout<<a<<endl;
	cout<<a<<" "<<(int)(a*10)<<endl;
    if(a-(int)a<=1e-5) cout<<"true";
    else cout<<"false";
	return 0;
}