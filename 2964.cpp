#include<iostream>
#include<cmath>
using namespace std;
int year = 2000;
bool yearjudge(int years)
{
	if(years%4 == 0){
		if(years%100 == 0 && years % 400 != 0){
			return false ;
		}	
		else 
			return true;
	}
	else
		return false;
	}
void days(int day)
{	int cnt = 0;
	int adder = 1;
	int sday = 0;
	int ctrl = 0;
	bool jud = true;
//	for(adder =1 ; cnt <= day;adder++)
	while(1)
	{
		jud = yearjudge(year);
		if(adder == 1 || adder ==3 || adder == 5|| adder == 7 || adder ==8 || adder == 10|| adder == 12)
		{
			cnt+=31;
			ctrl  = 31;
		}
		else if(adder == 4 || adder == 6 || adder == 9 || adder == 11)
		{
			cnt +=30;
			ctrl = 30;
		}
		else if(adder == 2 && jud == false)
		{
			cnt +=28;
			ctrl = 28;
		}
		else if(adder ==2 && jud == true){
			cnt +=29;
			ctrl = 29;
		}
		if(cnt > day)
		{
			sday =  ctrl + day - cnt + 1;
			if(sday == 0)
				sday = 1;
			break;
		}
		if(cnt == day)
		{
			sday = 1;
			adder ++;
			if(adder == 13)
			adder = 1;
			break;
		}
		adder = adder + 1;
		if(adder == 13)
			adder = 1;
	}
	if(adder < 10){
	if(sday >=10)
		cout <<"0"<< adder << "-" << sday << " ";
	else 
		cout <<"0"<<adder << "-"<<"0"<<sday << " ";
	
}
	else
		{
		if(sday >=10)
		cout << adder << "-" << sday << " ";
		else 
		cout <<adder << "-"<<"0"<<sday << " ";
			
		}
}
void weekend(int day)
{
	int weekn = (6+day)%7;
	if(weekn == 0) cout << "Sunday" << endl;
	else if(weekn == 1 )cout << "Monday" << endl;
	else if(weekn == 2) cout <<"Tuesday" << endl;
	else if(weekn == 3 )cout << "Wednesday" << endl;
	else if(weekn == 4) cout << "Thursday" << endl;
	else if(weekn == 5) cout << "Friday" << endl;
	else if(weekn == 6) cout <<"Saturday" << endl; 
}


int yeara(int day){
	
	bool isnot = false;
	while(1)
	{
		isnot = yearjudge(year);
		if(isnot == true)
		{
			day -= 366;
			year ++;
			if(day < 0)
		{
				day +=366;
				year -- ;
				break;
		}	
			
		}
		else
		{
				day -= 365;
			year ++ ;
			if(day <0)
			{
				day +=365;
				year --;
				break;
			}
		}
	}
		cout << year << "-";
	
		return day ;
}



int main(){
	int day = 0 ;
	int day2 = 0;
	while(1){
		cin >> day;
		day2 = day;
		if(day == -1)
			return 0;
		else {
		
			day = yeara(day);
			days(day);
			year = 2000;
			weekend(day2);
			}
	}
	return 0;
} 
