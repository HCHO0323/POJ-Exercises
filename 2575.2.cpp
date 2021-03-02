#include<bits/stdc++.h>
using namespace std;
main(){
	int n =  0 ;
	bool rep = true;
	int ans[3005];
	cin >> n;
	int num[3005] = {0};
	for(int i = 0 ; i < n ;  i++){
		//scanf("%d",&num[i]);
		cin >> num[i] ;
	}
	for(int i = 1 ; i <= n ; i ++){
		int answer = abs(num[i] - num[i-1]);
		if(answer >3005);
		else
			ans[answer] = 1;
	}
	for(int i = 1 ; i <= n-1 ; i ++)
	{
		if(ans[i] != 1)
		{
		rep = false;
		break;}	
}
		if(rep)	cout << "Jolly";
		else
			cout << "Not jolly";
}
