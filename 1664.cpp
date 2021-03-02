#include<bits/stdc++.h>
using namespace std;
int count(int x,int y){
	if(x==0 || y==1)  
		return 1;
	 if(x < y)
		return count(x,x);
		
		return	count(x,y-1) + count(x-y,y); 
}

main(){
	int x ,y ;
	int n = 0 ;
	cin >> n;
	while(n--){
	cin >> x>> y;
	int ans = 0;
	ans = count(x,y);
	cout << ans << endl;
	
}
}
