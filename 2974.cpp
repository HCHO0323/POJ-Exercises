#include<iostream>
#include<cstring>
#include<cstdlib>
#include<algorithm>
using namespace std;
char getword(char a)
{		if(a == '1')
			return '1';
	else	if(a == 'A'||a =='B'||a=='C' || a == '2')
			return '2';
	else	if(a == 'D'||a =='E'||a=='F' || a == '3')
			return '3';
	else	if(a == 'G'||a =='H'||a=='I' || a == '4')
			return '4';
	else	if(a == 'J'||a =='K'||a=='L' || a == '5')
			return '5';
	else	if(a == 'M'||a =='N'||a=='O' || a == '6')
			return '6';
	else	if(a == 'P'||a =='R'||a=='S' || a == '7')
			return '7';
	else	if(a == 'V'||a =='T'||a=='U' || a == '8')
			return '8';
	else	if(a == 'Y'||a =='W'||a=='X' || a == '9')
			return '9';
	else	if(a == '0')
			return '0';	
		else 
			return a; // printing needs carefully.
}
int compare(const void * elem1,const void * elem2){
	return (strcmp((char* )elem1,(char*)elem2));
} 
struct copys{
	char str[20];
	int cnt;
};
int main(){
	int n = 0;
	int ans = 0;
	int length = 0;
	char str[100];
	char str2[100];	
	int cnt = 0;
	int k = 0;
	int checkl = 0;
	int check2 = 0;
	copys check[2005];
	copys temp,min;
//	cin >> n;
	scanf("%d",&n);
	for(int i=0;i<n;i++) // all
	{
		scanf("%s",&str);
		length = strlen(str);
		for(int j=0,k=0;j<length;j++,k++) // part1
		{
			if(str[j] != '-' && cnt !=3)
			{
				str2[k] = getword(str[j]);
				cnt++;
			}
			else if(str[j]!='-' && cnt == 3)
			{
				str2[k++] = '-';
				str2[k] = getword(str[j]);	
				cnt ++;		
			} 	
			else if(str[j] == '-' && cnt ==3)
			{
				str2[k] = '-';
					cnt++;
			}
			else if(str[j] == '-' && cnt !=3)
			{
				k--;
			}
			
		}
		cnt = 0;
		//part2 
		for(int qs=0;qs<n;qs++)
		{
			
			if((strcmp(check[qs].str,str2) == 0))
			{
				check[qs].cnt ++;
				break;
			}
			else if(qs>=checkl)
				{
					strcpy(check[qs].str,str2);
					checkl++;
					check[qs].cnt ++;
					break;
				}
		}
	}
	//PART3
	
	//part4

	for(int i=0;i<checkl;i++){
		
	
		for(int j=i;j<checkl;j++)
		{
			
			if(strcmp(check[i].str,check[j].str)>0)
			{	
					strcpy(temp.str,check[i].str);
					temp.cnt = check[i].cnt;
				
					strcpy(check[i].str,check[j].str);
					check[i].cnt = check[j].cnt;
					
					strcpy(check[j].str,temp.str);
					check[j].cnt = temp.cnt;
				
				
			}
		}
	
	}
	//	qsort(check->str,checkl,20,compare);

	for(int i=0;i<checkl;i++){
		if(check[i].cnt !=1)
			{
			printf("%s %d\n",check[i].str,check[i].cnt);
			ans=1;
			
			}
			
		
	}
	if(ans == 0)
			cout <<"No duplicates.";
	return 0;
}
