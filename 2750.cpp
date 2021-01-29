	#include<iostream>
	using namespace std;
	#define chick 2
	#define rabbit 4 
	int main(){
		int number[10000];
		int max = 0;
		int min = 0;
		int i=0;
			cin >> number[0];
		if(number[0] ==2)
		{
			cout<<"1 1";
			return 0;
		}
			int miditem = number[i] / rabbit ;
			int midless = number[i] % rabbit ; 
			if(midless == 1 || midless == 3)
			{
				cout << 0 << " " ;
				
			}
			else
			{
				min = miditem + midless/2;
				cout << min << " ";
			}
			
			 miditem = number[i] / chick ;
			 midless = number[i] % chick ; 
			if(midless == 1)
			{
				cout << 0  ;
				
			}
			else
			{
					max = miditem + midless;
				cout << max ;
			}
		
		return 0;
}
