#include<iostream>
#include<cmath>
#include<cstdlib>
#include<cstring>
using namespace std;

 main(){
	int an[20][20];
	memset(an,0,sizeof(an));
	for(int i =0;i<20;i++)
	{
		for(int j=0;j<20;j++)
			cout<< an[i][j]<< endl;
	}
}
