#include<bits/stdc++.h>
using namespace std;
struct pois{
	int x;
	int y;
};
int main(){
	int n = 0;
	int t = 0;
	int len[100000];
	pois poi[100000];
	cin >> n;
	for(int i = 0; i < n ; i ++)
	{
		cin >> poi[i].x >> poi[i].y ;
		
	}
	for(int i = 0; i < n; i ++)
	for(int j = i+1 ; j <n ; j++){
		len[t++] = pow(abs(poi[i].x - poi[j].x),2) +pow(abs(poi[i].y - poi[j].y),2) ;
	}
	int min = 10000000;
	for(int i = 0;i<(n*(n-1)/2) ; i ++){
		if(len[i] < min)	min = len[i];
	}
	cout << min << endl;
}
