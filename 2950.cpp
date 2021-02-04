#include<iostream>
#include<cmath>
#include<cstdlib>
#include<cstring>
using namespace std;

int main(){
	int m = 0;
	int n = 0;
	int k = 0;
	int spendtime = 0;
	int nuts = 0;
	int spendtime_back = 0;
	int nuts_back = 0;
	int i = 0;
	int j = 0;
	int x = 0;
	int y = 0;
	int x_form = 0;
	int y_form = 0;
	int q = 0;
	int mm = 0;
	int maxx = 0;
	int maxy = 0;
	int field[100][100];
	cin >> q;
	
	for(mm = 0;mm<q;mm ++){
		memset(field,0,sizeof(field));
	
	scanf("%d %d %d",&m,&n,&k);
	for(i = 1;i<=m;i++){
	
		for(j=1;j<=n;j++)
		{
			scanf("%d",&field[i][j]);	
		}
	}
	spendtime = 0; 
		nuts = 0;
		y= 0;
		x = 0;
		
	
	while(spendtime < k){	
		field[0][0] = 0;
		maxy = 0;
		maxx = 0;  // 这两行是ac的关键。 在上一次和下一次的交替中会出现问题。 因此建议每一次都要初始化，或者用int来完成这个目的。 
		for(i = 1;i<=m;i++){
	
	for(j=1;j<=n;j++)
	{
			if(field[i][j] > field[maxy][maxx]) 
			{
				maxy = i;
				maxx = j;
				field[0][0] = field[i][j]; // scout
			}	
			}
	}
	 
		if(field[0][0] == 0){
			break;
		}
	
		if(y == 0)
			x = maxx;
	if(spendtime + abs(maxx - x) + abs(maxy - y) + 1 + maxy <= k) // take nuts
	{

		spendtime = spendtime +abs( maxx - x )+ abs(maxy - y) + 1;
		nuts = nuts + field[0][0];
		x= maxx;
		y = maxy ;
		field[maxy][maxx] = 0;
	}
	else
		break;



}
printf("%d\n",nuts);

}
		return 0;
	}

	
	
	

