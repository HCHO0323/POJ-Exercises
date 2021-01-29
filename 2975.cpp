#include<iostream>
#include<cstring>
using namespace std;
char getchar(char a){
	if(a == 'A') return 'V';
	else if(a == 'B') return 'W';
	else if(a == 'C') return 'X';
	else if(a == 'D') return 'Y';
	else if(a == 'E') return 'Z';
	else if(a == 'F') return 'A';
	else if(a == 'G') return 'B';
	else if(a == 'H') return 'C';
	else if(a == 'I') return 'D';
	else if(a == 'J') return 'E';
	else if(a == 'K') return 'F';
	else if(a == 'L') return 'G';
	else if(a == 'M') return 'H';
	else if(a == 'N') return 'I';
	else if(a == 'O') return 'J';
	else if(a == 'P') return 'K';
	else if(a == 'Q') return 'L';
	else if(a == 'R') return 'M';
	else if(a == 'S') return 'N';
	else if(a == 'T') return 'O';
	else if(a == 'U') return 'P';
	else if(a == 'V') return 'Q';
	else if(a == 'W') return 'R';
	else if(a == 'X') return 'S';
	else if(a == 'Y') return 'T';
	else if(a == 'Z') return 'U';
	else 
		return a;
														
	
}
int main(){
	char num[1000];
	char start[6] = "START";
	char end[4] = "END";
	char endofinput[] = "ENDOFINPUT";
	bool change = false;
	while(1)
	
	{
		gets(num);	
		if(strcmp(num,end) == 0)
			
			
			change = false;
			
		if(change == true)
		{
			int len = strlen(num);
			for(int j =0;j<len;j++)
			{
					num[j] = getchar(num[j]);
					cout << num[j];
			}
				cout << endl;
		}
		if(strcmp(num,start) == 0)
		{
			change = true;
			
		}	
	
		if(strcmp(num,endofinput) == 0)
			break;
			
	}
	return 0;
}
