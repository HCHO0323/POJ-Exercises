#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
char str1[1000];   //store str1
char str2[1000];   // store str2
int maxlen[1000][1000]; // store maxlen   maxlen[i][j] is str1[i] & str2[j] process.
int main()
{
	while((scanf("%s%s",str1+1,str2+1)) >0){ // input and cycle.
		int length1 = strlen(str1+1); // +1 is to at the same i or j.
		int length2 = strlen(str2+1);
		int tmp;
		
		for(int i = 0;i<=length1 ; i++){
			maxlen[i][0] =  0;
		}
		for(int i = 0;i<=length2;i++)
			maxlen[0][i] =  0;
		
		for(int i = 1;i<=length1 ; i ++){
			for(int j = 1;j<=length2 ; j++){
				if(str1[i] == str2[j]){ // if str[i] == str[j] then maxlen[i-1] + 1 -> maxlen[i]
					maxlen[i][j] = maxlen[i-1][j-1] + 1;
				}
				else
				{
					int len1 = maxlen[i][j-1];
					int len2 = maxlen[i-1][j];
					if(len1 > len2)	maxlen[i][j] = len1;
					else	maxlen[i][j] = len2;
				}
				
			}
		}
		cout << maxlen[length1][length2]<<endl;
	}
		return 0;
}
