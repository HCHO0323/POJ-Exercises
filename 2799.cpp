#include<iostream>
#include<cstring>
#include<cstdlib>
#include<algorithm>
using namespace std;
long double compare(const void *a,const void *b){
	return *(long double *) a - *(long double *) b;
}
int main(){
	int n = 0;
	cin >> n;
	long double str[10001];
	for(int i =0;i<n;i++)  
	{
		
		cin >> str[i];
	}
	std::sort(str,str+n);
	//qsort(str,n,sizeof(long double *),compare);
	for(int i=0;i<n;i++){
		cout << str[i] << endl;
	}
	return 0;
	}

