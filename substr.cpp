#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char str[100];
	cin >> str;
	char str2[100];
	char str3[100];
	int len = strlen(str);
	int len2 = strlen(str);
	while(len2>0){
		for(int i=0;i<=len - len2;i++)  // len - len2 represents that the first one can "move" len-len2 
		{
			strncpy(str2,str+i,len2);
			str2[len2] = '\0';
			//cout<<str2<<endl;
		
			strncpy(str3,str+i,len2);
			str3[len2] = '\0';
			strrev(str3);
			cout << str3<<endl;
		
		
		}	
		len2--;  // it represents the length of substring
	}
	return 0;
}
