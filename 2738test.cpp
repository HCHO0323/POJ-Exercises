#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int main(){
	char str1[105];
	char str2[105];
	char str3[105];
	char str4[105];
	cin>>str1;
	cin>>str2;
	int n1 = strcmp(str1,"0");
	int n2 = strcmp(str2,"0");
	if(n1 == 0 && n2 == 0)
		{
		cout << "0";
		return 0;}
	int len1 = 0;
	int len2 = 0;
	len1 = strlen(str1);
	len2 = strlen(str2);
	int p1 = 0;
	int p2 = 0;
	int i = 0;
	int j = 0;
	int k = 0;
	int l = 0;
	bool cnt1 = false;
	bool cnt2 = false;
	bool zero1 = false;
	bool zero2 = false;
	while(1){
		if(str1[i] == '.')
		{
				p1 = i;
				zero1 = true;
			break;
		}
		i++;
		if(i>len1) break;
		}
		i = 0;
	while(1){
	
		if(str2[i] == '.'){
			p2 = i;
			zero2 = true;
			break;
		}
		i++;
		if(i>len2) break;
	}
	if(zero1 ==false && zero2 == false)	{
			p1 = len1;
			p2 = len2;
			for(i = p1-1,j = p2 -1,k = 99;i>= 0 && j >= 0;i--,j--,k--)
	{
		//str3[k] = (str1[i] - '0') + (str2[j] - '0') + cnt1 + '0';
		int ans1 = (str1[i] - '0');
		int ans2 = (str2[j] - '0');
		int ans = ans1 + ans2 + cnt1;
		if( ans >= 10){
			cnt1 = true;
			ans = ans - 10;
		}
		else
			cnt1 = false;
		str3[k] = ans + '0';
	}
	if(i>j)
	{
		for(;i>=0;i--,k--)
		{
			int ans1 = (str1[i] - '0');
			int ans = ans1 + cnt1;
			if( ans >= 10){
			cnt1 = true;
			ans = ans - 10;
		}
		else
			cnt1 = false;
		str3[k] = ans + '0';
		}
	}
	else if(i<j)
	{
		for(;j>=0;j--,k--)
		{
			int ans1 = (str2[j] - '0');
			int ans = ans1 + cnt1;
			if( ans >= 10){
			cnt1 = true;
			ans = ans - 10;
		}
		else
			cnt1 = false;
		str3[k] = ans + '0';
		}
	}
	bool zero = false;
		int q = l+1;
	if(i == j){
	
		if(cnt1 == true)
		{
			cout << "1";
			for(k=k+1;k<=99;k++)
			{
				cout << str3[k];
			}
		}
		else
		{
			for(k = k+1;k<=99;k++)
			{
				cout << str3[k];
			}
		}
}	

//	
//	for(q = l+1;q<=99;q++)
//	{
//		if(str4[q] != '0')
//			zero = true;
//	}
//	if(zero == true)
//	{
			
			}
else{

	i = len1 -1;
	j = len2 -1 ;
	int num1 = len1 - p1;
	int num2 = len2 - p2;
	//xiaoshu
	if(num1>num2)
	{	l=99;
		for(int nu = i;i>nu-(num1-num2);i--,l--)
		{
			int ans1 = (str1[i] - '0');
			int ans = ans1 + cnt2;
			if( ans >= 10){
			cnt2 = true;
			ans = ans - 10;
		}
		else
			cnt2 = false;
		str4[l] = ans + '0';
		}
	}
	else if(num1<num2)
	{	l = 99;
		for(int nu = j;j>nu-(num2-num1);j--,l--)
		{
			int ans1 = (str2[j] - '0');
			int ans = ans1 + cnt1;
			if( ans >= 10){
			cnt2 = true;
			ans = ans - 10;
		}
		else
			cnt2 = false;
		str4[l] = ans + '0';
		}
	}
	else if(num1 == num2)	l = 99;
		for(;i> p1 && j >p2;i--,j--,l--)
	{
		//str3[k] = (str1[i] - '0') + (str2[j] - '0') + cnt1 + '0';
		int ans1 = (str1[i] - '0');
		int ans2 = (str2[j] - '0');
		int ans = ans1 + ans2 + cnt2;
		if( ans >= 10){
			cnt2 = true;
			ans = ans - 10;
		}
		else
			cnt2 = false;
		str4[l] = ans + '0';
	}
	if(i>j)
	{
		for(;i>p1;i--,l--)
		{
			int ans1 = (str1[i] - '0');
			int ans = ans1 + cnt2;
			if( ans >= 10){
			cnt2 = true;
			ans = ans - 10;
		}
		else
			cnt2 = false;
		str4[l] = ans + '0';
		}
	}
	else if(i<j)
	{
		for(;j>p2;j--,l--)
		{
			int ans1 = (str2[j] - '0');
			int ans = ans1 + cnt1;
			if( ans >= 10){
			cnt2 = true;
			ans = ans - 10;
		}
		else
			cnt2 = false;
		str4[l] = ans + '0';
		}
	}
//zhengshu

	if(cnt2 == true)
		str1[p1-1]++;
	for(i = p1-1,j = p2 -1,k = 99;i>= 0 && j >= 0;i--,j--,k--)
	{
		//str3[k] = (str1[i] - '0') + (str2[j] - '0') + cnt1 + '0';
		int ans1 = (str1[i] - '0');
		int ans2 = (str2[j] - '0');
		int ans = ans1 + ans2 + cnt1;
		if( ans >= 10){
			cnt1 = true;
			ans = ans - 10;
		}
		else
			cnt1 = false;
		str3[k] = ans + '0';
	}
	if(i>j)
	{
		for(;i>=0;i--,k--)
		{
			int ans1 = (str1[i] - '0');
			int ans = ans1 + cnt1;
			if( ans >= 10){
			cnt1 = true;
			ans = ans - 10;
		}
		else
			cnt1 = false;
		str3[k] = ans + '0';
		}
	}
	else if(i<j)
	{
		for(;j>=0;j--,k--)
		{
			int ans1 = (str2[j] - '0');
			int ans = ans1 + cnt1;
			if( ans >= 10){
			cnt1 = true;
			ans = ans - 10;
		}
		else
			cnt1 = false;
		str3[k] = ans + '0';
		}
	}
	bool zero = false;
		int q = l+1;
	if(i == j){
	
		if(cnt1 == true)
		{
			cout << "1";
			for(k=k+1;k<=99;k++)
			{
				cout << str3[k];
			}
		}
		else
		{
			for(k = k+1;k<=99;k++)
			{
				cout << str3[k];
			}
		}
}	

//	
//	for(q = l+1;q<=99;q++)
//	{
//		if(str4[q] != '0')
//			zero = true;
//	}
//	if(zero == true)
//	{
			cout << ".";
		for(l = l+1;l<=99;l++)
				cout << str4[l];
}
		return 0;
}
