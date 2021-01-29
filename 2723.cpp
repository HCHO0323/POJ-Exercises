#include<iostream>
using namespace std;
int main(){
	int n = 0;
	cin >> n;
	int weekn = n - 1;
	int adder = 1;
	int cnt = 1;
	for(;;)
	{
		cnt ++;
		weekn = (weekn+1)%7;
		if(cnt == 31 && adder == 12)
			break;
		if(cnt == 13 && weekn == 4)
			cout << adder<<endl;
		if(adder == 1 || adder ==3 || adder == 5|| adder == 7 || adder ==8 || adder == 10|| adder == 12)
		{
			if(cnt == 31)
			{
				adder ++;
				cnt = 1;
				weekn = (weekn+1)%7;
			}
		}
		else if(adder == 4 || adder == 6 || adder == 9 || adder == 11)
		{
			if(cnt == 30)
				{
					adder ++;
					cnt = 1;
					weekn = (weekn+1)%7;
				}
				
		}
		else if(adder == 2)
		{
				if(cnt == 28)
				{
					adder ++;
					cnt = 1;
					weekn = (weekn+1)%7;
				}
	}
		
	}
	return 0;
} 
