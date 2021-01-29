#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
double getvalue(char m[],int qu){
	int n  = 0 ;
	n = strlen(m);
	double sum = 0;
	for(int i = 0;i<n;i++)
	{
//		if(n == 1)
//		sum += ((m[i] - '0') * pow(qu,i));
//		else
		if(m[i]- '0' >= qu)
				return -1;
		sum += ((m[i] - '0') * pow(qu,n-i-1));
	}
	return sum;
}

int main(){
	char p[100],q[100],r[100];
	scanf("%s %s %s",&p,&q,&r);
	double sump,sumq,sumr;
	for(int i=2;i<=16;i++)
	{
		sump = getvalue(p,i);
		sumq = getvalue(q,i);
		sumr = getvalue(r,i);
		if(sumr == sumq*sump)
		{
				cout << i ;
				return 0;
	}
	}
	cout << "0" ;
	return 0;
}
