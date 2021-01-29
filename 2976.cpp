#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char sa[100005],ta[100005];
	while((scanf("%s %s",&sa,&ta))!= EOF) //不定项个数据的写法 
	{
	
		int s = 0;int t = 0;
		int lens = 0;
		int lent = 0;
		lens = strlen(sa);
		lent = strlen(ta);
		for(s = 0,t = 0;s<lens&&t<lent;)
		{
			if(sa[s] == ta[t])
			{
				s++;
				t++;
			}
			else if(sa[s] != ta[t])
			{
				t++;
			}
		}
		if(s == lens)
			cout << "Yes"<<endl;
		else 
			cout << "No" << endl;
	}
	return 0;
}
