#include<iostream>
using namespace std;
int ways(int a,int n){
	if(a == 0)
		return 0;
	if(n == 0)
		return 1;
	if(a<=n)
		return ways(a,n-a) + ways(a-1,n);
	else
		return ways(a-1,n); // actually it is seperate a or n .
} 
 main(){
	int n = 0;
	while((cin >> n))
	cout << ways(n,n) << endl;
}
