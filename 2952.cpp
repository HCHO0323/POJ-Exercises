//complete the multi firstly before. then come back to finish this.
#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int main(){
	char str[100];	
	char str2[100];
	long double ans[100] = {0};
	long double number = 0;
	bool ansbo[100] = {false};
	int cnt = 0;
	int j = 0;
	int cntx = 0;
	cin >> str;
	int len = strlen(str);
	int len2 = len;
	for(int i = 0,j=0;i<len;i++){
		number += ((str[i] - '0') * pow(10,len-i-1)); 
		if(number != 0)
		{
			str2[j] = str[i];
				j++;
			len2 -- ;
		}
//		if(len2 == 0)
//		{
//			cout << "1" << endl;
//			return 0;
//		}
	}
	
	for(int i = 0;i<len;i++)
	{
		for(j = i,cnt = 0; cnt<len ; j = (j+1)%len,cnt++){ //q1
			ans[i] += ((str[j] - '0') * pow(10,len-cnt-1)); // str
		}
	}
	//int len3 = len - len2;
	for(int i = 1,cntx = 0;i<=len;i++){		// multi
		for(j = 0;j<len;j++)
			if((number * i) == ans[j])
				{	ansbo[cntx] = true;
					cntx++;
					break;
				}
			
	}
	for(int i =0;i<len;i++){
		if(ansbo[i] == false){
		
			cout << "0"<<endl;
				return 0;
		}
	}
		cout << "1" << endl;
		return 0;
}
