#include<iostream>
#include<cstring>
using namespace std;
char haab[30][30] ={"pop","no", "zip", "zotz", "tzec", "xul", "yoxkin","mol", "chen", "yax", "zac", "ceh","mac", 
"kankin","muan", "pax", "koyab", "cumhu"};
char holly[30][30] ={"imix", "ik", "akbal", "kan", "chicchan", "cimi", "manik", "lamat", "muluk", "ok", "chuen", 
"eb", "ben", "ix", "mem", "cib", "caban", "eznab", "canac", "ahau"}; 
int main(){
	int n = 0;
	int numb = 0;
	char hab[30];
	int j = 0;
	memset(hab,0,sizeof(hab));
	int numb2 = 0;
	bool tr = true;
	int day = 0;
		cin >>n ;
	for(int i = 0;i<n;i++)
	{
	
		scanf("%d. %s %d",&numb,hab,&numb2);
		for( j =0;j<18;j++)
		{
			if(strcmp(hab,haab[j]) == 0){
				break;
			}
		}
			day = numb2 * 365 + j * 20 + numb; // 1.1 = 1 1.31 = 31 2.1 = 32 -- 32		
		if(tr == true)
		{	printf("%d\n",n);	tr = false; }
			printf("%d %s %d\n",day%13+1,holly[day%20],day/260);
	}	
	return 0;
}

