#include<iostream>
#include<algorithm>
using namespace std;
bool cmp(int a,int b )
{
	return a>b;
}
bool cmp2(char a,char b){
	return a>b;
}
int main(){
	int ab[10] = {1,3,4,5,7,9,0,4,2,8};
	//char str[6][10] = {"abcf","eggdc","adbr","abdf","qsgrgi","qjirn"};
	sort(ab,ab+10); // default mode is upper. 
	for(int i = 0; i < 10 ; i ++)
	{
		cout << ab[i] << " " ;
	}
		cout << endl;
	sort(ab,ab+10,cmp); // if we use cmp function, the mode becomes lower.
	for(int i = 0; i < 10 ; i ++)
	{
		cout << ab[i] << " " ;
	}
	cout << endl;
	//sort(str,str,cmp2);
	for(int i = 0; i < 6 ; i ++)
	{
		cout << str[i] << " " ;
	}
	return 1;
}
