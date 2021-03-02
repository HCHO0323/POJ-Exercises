#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int f[1005];
int p[1005];
int dp[1005];  // firstly, assert that each one use [i] . then find the max p in i which is dp[i]
int main(){		// then ,find out the max of dp which is the answer.
	int t = 0;
	int n = 0;
	int k = 0;
	cin >> t;
	for(int i = 0; i<t; i ++)
	{
		memset(f,0,sizeof(f));
		memset(p,0,sizeof(p));
		memset(dp,0,sizeof(dp));
		scanf("%d %d",&n,&k);
		for(int j = 0;j< n ; j ++){
			int num = 0;
			scanf("%d",&num);
			f[j] = num;
			
		}
		for(int j = 0;j<n ; j++){
			int nu = 0;
			scanf("%d",&nu);
			p[j] = nu;
			dp[j] = p[j];
		}

	for(int i=0;i<n;i++)
		{
			for(int j=0;j<i;j++)
			{
				if(abs(f[i]-f[j])>k)
				{
					dp[i]=max(dp[i],dp[j]+p[i]);
				}
			}
		}
	int ans=0;
		for(int i=0;i<n;i++)
		{
			ans=max(ans,dp[i]);
		}
		printf("%d\n",ans);

			
		
	}
	return 0;
}
