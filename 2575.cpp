#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int main(){
	int n = 0 ;
	double number[5000];
	double ans[5000];
	bool anc[5000];
	int cnt = 0;
	memset(ans,0,sizeof(ans));
	memset(anc,false,sizeof(anc));
	memset(number,0,sizeof(number));
	cin >> n;
	if(n == 1)	{	cout << "Jolly " << endl;   return 0 ; }
	for(int i = 0;i < n ; i ++){
		cin >> number[i];
		
	}
	for(int i = 1 ; i <= n  ; i++){
		ans[i] = abs(number[i] - number[i-1]);
	}
	int j = 0;
	for(int i = 1; i < n ; i ++){
		//memset(anc,false,sizeof(anc));
		for( j = i;j < i+n-1 ; j++){
			if(ans[j] < n)	{
				int answe = ans[j];
				anc[answe] = true;	
			}
			
		}
		cnt = 0 ;
		for( j = i ; j < i+n-1 ; j ++ )
	{
			if(anc[j] == false)	break;
			cnt ++ ;
			if(cnt == n-1)	{
			cout << "Jolly" << endl;	
			return 0;
		}
	}
	}
	cout << "Not jolly" << endl;
	return 0;
	
}
