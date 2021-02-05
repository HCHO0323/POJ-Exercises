#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;
double exp(){
	char a[10];
	scanf("%s",a);
	switch(a[0]){
		case '+': return exp() + exp();
		case '-': return exp() - exp();
		case '*': return exp() * exp();
		case '/': return exp() / exp();
		default: return atof(a);
	}
	
} 

main(){
	double s ;
	s = exp();
	//cout << s << endl;
	printf("%lf",s);
}
