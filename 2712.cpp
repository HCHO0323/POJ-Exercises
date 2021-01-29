#include<iostream>
#include<cmath>
using namespace std;

int day(int smonth,int sday)
{	int cnt = 0;
	int adder = 0;
	for(adder =1 ; adder < smonth;adder++)
	{
		if(adder == 1 || adder ==3 || adder == 5|| adder == 7 || adder ==8 || adder == 10|| adder == 12)
		{
			cnt+=31;
		}
		else if(adder == 4 || adder == 6 || adder == 9 || adder == 11)
		{
			cnt +=30;
		}
		else
			cnt +=28;
			
	}
	cnt = cnt + sday -1 ;	
	return cnt ;	
}


int main(){
	int n = 0;
	long number = 0;
	int b = 0;
	int c =0;
	int d = 0;
	int a = 0;
	int sub = 0 ;
	cin >> n;
	for(int i = 0;i<n;i++)
	{
		scanf("%d %d %ld %d %d",&a,&b,&number,&c,&d); // start yue ri num jieshu yue ri
		int sday1 = day(a,b);
		int sday2 = day(c,d);
		sub = sday2 - sday1 ; 
		for(int j = 0; j< sub ; j ++)
		{
			number*=2;
		}
		cout << number << endl;
	}
	
	return 0;
	
}
