#include<iostream>
using namespace std;
void numbercheck(int a, int b){
	if(a == b)
		cout << a << endl;
	else if(a>b)
		numbercheck(a/2,b);
	else 
		numbercheck(a,b/2);
}
main(){
	int a,b;
	cin >> a >> b;
	numbercheck(a,b);
		
}

