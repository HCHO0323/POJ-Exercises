#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int change(int ax,int b,char a[])
{
	char bn[1200];
	int i=0;
	int cnt = 0;
	for( i=0;i<b-ax;i++)
	{
		bn[i] = '0';
		cnt ++ ;
	}
	for(int j =0;i<b+cnt;i++,j++){
		bn[i] = a[j];
	}
	int dn = strlen(bn);
	strcpy(a,bn);
		return dn;
}
int main()
{
	char a[1000];
	char b[1000];
	char c[1000];
	scanf("%s",&a);
	scanf("%s",&b);
	int alen,blen;
	int ain = 0;
	int bin = 0;
	int cin = 0;
	int adder = 0;
	int ea = 0;
	int  zero = 0;
	bool whi = false;
	alen = strlen(a);
	blen = strlen(b);
	if(alen > blen)	
	 blen = change(blen,alen,b);
	else
	 alen = change(alen,blen,a);
	int ca = min(alen,blen);
	int fa = max(alen,blen);
//	if(alen >= blen) {
//	whi = true;
//	ea = alen;
//	}
//	else
//		ea = blen;
//	
//	for(int i = ea-1;i>=ca;i--)
//{	
//	if(whi)	c[i] = a[i];
//	else
//		c[i] = b[i];
//}
	for(int i = ca-1;i >= 0 ;i--)
	{
		ain = a[i] - '0';
		bin = b[i] - '0';
		if(adder == 1)
		cin = ain + bin+1;
		else
		cin = ain + bin;
		
		
		if(cin >= 10)
		{
			c[i] = (cin - 10) + '0';
			adder = 1;
		}
		else 
		{
			c[i] = cin + '0';
			adder = 0;
			
		}
		
		
	}
//	if(a0 == false)	fa = blen;
//	else if(b0 == false) fa = alen;
		 // fa = strlen(c);
	int i = 0;
	for( i = 0;i < fa ; i++ )
		{	
			if(adder == 1)
			{
				cout << "1";
				adder = 0;
				zero++;
			}
			if(c[i] != '0')
			{
				zero ++;
				printf("%c",c[i]);
			}
			if(zero == 0 && c[i] == '0'){;}
			
			if(zero != 0 && c[i] == '0')	printf("%c",c[i]);
			
		}
		if(!zero) printf("0\n");
	return 0;
}
