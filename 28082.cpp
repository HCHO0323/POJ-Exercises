#include<iostream>
using namespace std;
int main(){
	bool tree[10005];
	int l = 0;
	int m = 0;
	int a = 0;
	int b = 0;
	int cnt = 0;
	scanf("%d %d",&l,&m);
	for(int i=0;i<=l;i++)
	{
		tree[i] = true;
	}
	for(int i=0;i<m;i++)
	{
		scanf("%d %d",&a,&b);
		if(a<b)
		{
			for(int j=a;j<=b;j++)
			{
				tree[j] = false;
			}
		}
		else
			{
			for(int j=b;j<=a;j++)
			{
				tree[j] = false;
			}
		}
	}
	for(int i = 0;i<=l;i++)
	{
		if(tree[i] == true)
			cnt++;
	}
	cout << cnt;
		return 0;
}
 
