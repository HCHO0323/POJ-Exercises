#include<iostream>
#include<cstring>
int m,n,ans;
using namespace std;
struct chess{
	bool ch[20][20];
};
void chesshorse(int q,int a,int cnt,chess che){
	int x = q;
	int y = a;

	if(x<0 || x> n-1 || y <0 || y >m-1 || che.ch[x][y] == true);
	else {
		che.ch[x][y] = true;
		cnt ++;
		if(cnt == n*m)	ans ++;
	 	chesshorse(x+1,y+2,cnt,che);
		chesshorse(x-1,y-2,cnt,che);
		chesshorse(x-2,y-1,cnt,che);
		chesshorse(x+2,y+1,cnt,che);
		chesshorse(x+2,y-1,cnt,che);
		chesshorse(x+1,y-2,cnt,che);
		chesshorse(x-2,y+1,cnt,che);
		chesshorse(x-1,y+2,cnt,che);
		
}
}
 main(){
	int x,y;
	int t = 0;
	cin >> t;
	chess che;
	//bool chess[20][20];
	for(int i = 0;i<t;i++)
	{	ans = 0;
		cin >> n>>m>>x>>y;
		for(int j = 0;j<n;j++)
		for(int k = 0;k<m;k++)
			che.ch[j][k] = false;
		int max = 0;
		chesshorse(x,y,0,che);
		cout << ans<<endl;
	}
}
