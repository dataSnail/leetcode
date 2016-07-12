#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

#define f sqrt(5)

int main(){
	int n = 7;
 //    vector<int> result;
 //    result.push_back(0);
 //    result.push_back(1);
 //    for(int i = 2;i<=n;i++){
 //        result.push_back(result[i-1]+(result[i-2]>0?result[i-2]:1));
 //        cout<<result[i]<<endl;
 //    }
	cout<<(1/f)*(pow(((1+f)/2),n+1)-pow(((1-f)/2),n+1));
    return 0;
}