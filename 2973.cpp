#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int ans = 0;
void getans(char skew[],int n,int i)
{
	ans += ((skew[i] - '0') * (pow(2,n) - 1));
	
	if(n>0)
		getans(skew,n-1,i+1);
	
}


int main(){
	int n = 0;
	char skew[100] = "answer";
	for(; ;)
	{	scanf("%s",&skew);
		if(skew[0] == '0')
			return 0;
		n = strlen(skew);
		ans = 0;
		getans(skew,n,0);
		cout<< ans <<endl;
	}
	return 0;
}
