#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char str[] = "0123456789";
	char n1[100];
	char n2[100];
	char n3[100];
	char n4;
//	char n5[100]; // incompatible types in assignment of char* to char[100]
	char *n5;
	int abs[100];
	int abs2;
	int abs3;
	int len = strlen(str);
	memset(n1,40,sizeof(n1)); //sizeof(n1) == 100
	memset(n2,40,100); 
	//memset(n3,40,100 * sizeof(n1)); // wrong
	memset(abs,20,sizeof(abs));
	memset(n3,40,sizeof(char) * 100);
	//memset(n4,40,sizeof(char)); // memset used in array only,and it can not used in single variable.
	//memset(abs2,20,sizeof(abs2));
	//	memset(abs2,20,sizeof(int)); //invaild change. from void * to int
	//	memset(abs3,20,sizeof(&abs3));
	strncpy(n1,str,len);
	strncpy(n2,str,5);
	n2[5] = '\0';
	strncpy(n3,str,20); //if len2 > len_before , then use 000 instead.
	n1[len] = '\0'; // so we need to use '\0' to stop the output or express the end of the str when we need to cout or printf.
	//memset(n5,40,sizeof(n5));
	n5 = strstr(n1,"1234"); //output the  address of the first time when "1234" come
	cout << n5 << endl;
	n5 = strstr(n1,n2); // n1 != n2 , so output null before n2[5] = '\0'
	cout << n5 << endl;  // so we can use strstr to judge if the subarray exists or not.
	cout << n1<<endl;
	cout << n2<<endl;
	cout << n3 << endl;
	return 0;
}
