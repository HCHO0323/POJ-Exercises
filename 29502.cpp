#include<iostream>
#include<cstdlib>
#include<memory.h>
#include<cmath>
using namespace std;
int t,m,n,k;
#define maxnum 55
int afield[maxnum][maxnum];
main(){
	cin >> t;
	for(int l = 0;l<t;l++){
		scanf("%d%d%d",&m,&n,&k);
		for(int i = 1;i<=m;i++)
		{
			for(int j = 1;j<=n;j++)
			{
				scanf("%d",&afield[i][j]);
			}
		}
		int ntotalpeanuts = 0;
		int ntotaltime = 0;
		int ncuri = 0;
		int ncurj;
		while(ntotaltime<k){
			int nmax = 0;
			int nmaxi;
			int nmaxj;
			for(int i=1;i<=m;i++)
			{
				for(int j=1;j<=n;j++)
				{
					if(nmax<afield[i][j])
					{
						nmax = afield[i][j];
						nmaxi = i;
						nmaxj = j;
					}
				}
			}
			if(nmax == 0)
				break;
			if(ncuri == 0)
				ncurj = nmaxj;
			if(ntotaltime+nmaxi+1+abs(nmaxi-ncuri)+abs(nmaxj-ncurj)<=k)
			{
				ntotaltime+=1+abs(nmaxi-ncuri)+abs(nmaxj-ncurj);
				ncuri = nmaxi;
				ncurj = nmaxj;
				ntotalpeanuts+=afield[nmaxi][nmaxj];
				afield[nmaxi][nmaxj] = 0;
				
			}
			else
				break;
				
		}
		printf("%d\n",ntotalpeanuts);
	}
}
