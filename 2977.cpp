#include<iostream>
using namespace std;
int main(){
	int p,e,i,d;
	int c = 0;
	bool tre = false;
	while((scanf("%d %d %d %d",&p,&e,&i,&d)) != EOF){
		for( c = d+1;c<d+21252;c++){
			if((c-i)%33 == 0)	break;
		}
		for(;c<d+21252;c = c+33){
			if((c-e)%28 == 0)	break;
		}
		for(;c<d+21252;c = c+(33*28)){
				if((c-p)%23 == 0)
				{
					tre = true;
						break;
				}
				
		}
		if(tre == true)	{
			cout << c-d << endl;
			return 0;
		}
		if(c >= d+21252)
		{
				cout <<"21252"<<endl;
			return 0;
		
	}
	}	
}
