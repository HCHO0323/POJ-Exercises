#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int n = 0;
	cin>>n;
	char str[10000];
	int ans[27] = {0};
	int max = 0;
	char maxnum = 'a';
	char a = 0;
	for(int m=0;m<n;m++)
	{
		
		scanf("%s",&str);
		if(m != n-1)
			scanf("%c",&a);
			for(int j=0;j<26;j++)
			{
				ans[j] = 0 ;
			}
			max = 0;
			maxnum = 0;
	  for(int i=0;i<strlen(str);i++){
	  
		for(int j=0;j<26;j++)
		{
			if(str[i] == 'a'+j)
			{
				ans[j] ++ ;
			}
			}
		for(int k=0;k<26;k++)
		{
			if(ans[k] == max && ('a'+k) <= maxnum)
				maxnum = 'a'+k;
			if(ans[k] > max)
				{
				max = ans[k];
				maxnum = 'a' + k;	
			}
			}	
	//	printf("%c %d\n",maxnum,max);
	}
		if(m==n-1)
			printf("%c %d",maxnum,max);
		else
				printf("%c %d\n",maxnum,max);
	}
	return 0;
}
