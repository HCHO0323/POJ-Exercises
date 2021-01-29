#include<iostream>
using namespace std;
int main(){
	int array[30];
	int length = 0;
	int cnt = 0;
	int i = -1;
	int cnt2 = 0;
	do{
		i++;
		scanf("%d",&array[i]);
	}while(array[i]!=0);
	cnt = i;
	for(i=0;i<cnt;i++){
		for(int j=0;j<cnt;j++)
		{
			if(array[i]==(array[j]/2) && i!=j && array[j]%2 == 0)
				cnt2++;
		}		
	}
	cout<<cnt2;
	return 0;
}

