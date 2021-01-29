// in this problem , it can concentrate on the input and output 
// it doesn't need accurate formula.
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n = 0;
	char begin[6];
	char end[6];
	int i = 0 ;
	int anx = 0;
	int any = 0;
	int length = 0;
	cin >> n;
	for(i=0;i<n;i++)
	{
		scanf("%s %s",begin,end);
		anx = abs(begin[0]-end[0]);
		any = abs(begin[1] - end[1]);	
		if(anx == 0 && any == 0)
		{
			cout << "0 0 0 0"<<endl;	
		}	
	else
	{	
		//king
		if(anx == 0 && any != 0)
			cout << any <<" " ;
		if(any == 0 && anx != 0)
			cout << anx << " ";
		if(anx!=0 && any!=0)
		{
			length = min(anx,any) + abs(any-anx);
			cout << length << " ";
		}
		// queen
		if(anx == 0)
			cout << 1 << " ";
	else if(any == 0)
			cout << 1 << " ";
	else if(anx == any)
			cout << 1 <<" ";
		else if((abs(anx-any))%2 !=0)
			cout << "Inf" <<" ";
		else
			cout << 2 <<" ";
	
		// car
		if(anx == 0)
			cout << 1 << " ";
		if(any == 0)
			cout << 1 <<" ";
		if(anx!=0 && any)
			cout << 2 <<" ";
		// bishop
		if(anx == any)
			cout << 1 <<endl;
		else if((abs(anx-any))%2 !=0)
			cout << "Inf" <<endl;
		else
			cout << 2 <<endl;
	}}
	return 0;
	
}
