#include<bits/stdc++.h>
using namespace std;
 main(){
	double a,b;
	cin >>a >> b;
	double c = log10(a);
	double d = log10(b);
	double e = d/c;
	for(int i = 0; i <= 20 ; i ++){
		if(e>=i && e<i+1)	
			{
				cout << i ;
				break;
			}
	}
}
