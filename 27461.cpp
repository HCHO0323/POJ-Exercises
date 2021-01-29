#include<iostream>
using namespace std;
int main(){
	 int n = 0;
	 int m = 0;
	 int cnt = 0;
	 int cnt2 = 0;
	 bool monkey[400];
	 for(;;){
	 bgn:
	 	cin>>n>>m;
	 	cnt = n;
	 	
	 	for(int i=1;i<=n;i++)
	 	{
	 		monkey[i] = true;
		 }
		 for(int i = 1;i<=n;)
		 {
		 	if(monkey[i] == true)
		 	{
		 			cnt2 ++;
		 		if(cnt2 == m){
		 			monkey[i] = false;
		 			cnt -- ;
		 			if(cnt < 1) 
					 { printf("%d\n",i);
					 		cnt2 = 0;
						  goto bgn;}
		 			if(cnt == 1)
		 			{
		 				for(int k = 1 ; k<=n ; k++)
		 				{
							if(monkey[k] == true)
						{
							 printf("%d\n",k);
						 			
						 }
						 }
						 		cnt2 = 0;
							 goto bgn;
						 }
		 		
		 			cnt2 = 0;
			 }
			 
			 }	
			 i = (i+1)%(n+1);
			 	if(i == 0)
			 		i = 1;
		 }
		 if(n == 0 && m == 0){
		 	break;
		 }
		 }
	 
	 return 0;
} 
