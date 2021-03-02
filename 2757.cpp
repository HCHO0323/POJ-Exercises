#include<iostream>
#include<cstdio>
using namespace std;
#define max_n 1000
int b[max_n+10];
int maxlen[max_n+10];
int main(){
	int n = 0;
	cin >> n;
	for(int i = 1;i<=n;i++)
		cin>>b[i];
	maxlen[1] = 1;
	
	for(int i = 2 ; i<=n ; i ++) // b[i] is the latest one and b[j] is the former one 
	{
		int tmp = 0;                     // 1 7 3 5 9 4 8
		for(int j = 1;j<i; j ++)         // j     i
			{                            //   j  j
				if(b[i] > b[j])
				{
					if(tmp < maxlen[j])   // ji cheng zhi qian de 
						tmp = maxlen[j];
				}
			}
		maxlen[i] = tmp + 1 ;  // suan shang zi ji
	}
	int maxl = -1;
	for(int i = 1 ; i<=n; i++){
		if(maxl < maxlen[i])
			maxl = maxlen[i];
			
	}
		cout << maxl << endl;
		return 0;	
}
