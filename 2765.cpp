#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
double ans = 0;
int ansarray[100];
void getans(char skew[],int n,int i)
{
	ans  = (ans +  (skew[i] - '0') )* 0.125;
	
	if(n>1)
		getans(skew,n-1,i-1);
	
}
int getansl(double ans,int n){
	int cnt = 0;
	int cnt2 = 0;
	int i =0;
	ans *=10;
	int ans2 = ans;
	while(cnt <= 3*n)
	{
//		if(ans2%10!= 0)
//			printf("%d",ans2 );
	if(ans2%10 == 0)
		cnt ++;
	else
	{
		cnt2++;
		cnt2 += cnt; 
		cnt = 0;
	}
		ansarray[i] = ans2;
		ans = ans - (ans2);
		ans *= 10;
		ans2 = ans;
		i++;
}
	return cnt2;
}
int main(){
	int n = 0;
	char skew[100] = "answer";
	char skew2[100];
		scanf("%s",&skew);
		n = strlen(skew);
	for(int i =0;i<n;i++)
	{
		skew2[i] = skew[i+2];
	}
	n = strlen(skew2);
	//	ans = 0;
		getans(skew2,n,n-1);
			printf("%s [8] = 0.",skew);//%.lf [10]
	int m =	getansl(ans,n);
	for(int i=0;i<m;i++)
	{
		printf("%d",ansarray[i]);
	}
			printf(" [10]");
	//	cout<< ans <<endl;
	
	return 0;
}

