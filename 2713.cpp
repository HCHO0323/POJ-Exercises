#include<iostream>
using namespace std;
int pict[1000][1000];
int main(){
	int n = 0;
	int cntl[1000] = {0};
	int cntw[1000] = {0};
	int maxl = 0;
	int maxw = 0;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		int k = i;
		for(int j=0;j<n;j++)
		{
			cin >> pict[i][j];
		}
	}
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
	{
		if(pict[i][j] == 0)
			cntl[i] ++; 
		if(pict[j][i] == 0)
			cntw[i] ++;
	}
	for(int i=0;i<n;i++)
	{	if(cntl[i] >= maxl)
			maxl = cntl[i];
		if(cntw[i]>=maxw)
			maxw = cntw[i];
	}
		int ans =  maxl*maxw - 2*(maxl+maxw-2);
		cout<<ans;
		return 0;
} 
