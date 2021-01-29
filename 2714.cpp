#include<iostream>
using namespace std;
int main(){
	int n = 0;
	cin >> n;
	float age = 0;
	float cnt = 0;
	for(int i =0;i<n;i++){
		cin >> age;
		cnt = age+cnt; 
	}
	printf("%.2f",(cnt/n));
	return 0;
}
