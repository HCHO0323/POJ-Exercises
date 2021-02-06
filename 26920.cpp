#include<stdio.h>
 
int status[12];
char left[3][7],right[3][7],result[3][7];
 
//�жϵ�ǰ������Ƿ���������
bool Balanced()
{
	int i,k,leftw,rightw;
	for(i = 0; i < 3; i++)
	{
		leftw = rightw = 0;
		for(k = 0; k <6 && left[i][k] !=0; k++)
		{
			leftw += status[left[i][k]-'A'];
			rightw += status[right[i][k]-'A'];
		}
			if(leftw > rightw && result[i][0]!='u') //����1 
				return false;
			if(leftw < rightw && result[i][0]!='d') //����2 
				return false;
			if(leftw == rightw && result[i][0]!='e') //����3 
				return false;	
	}
	return true; 	
} 
 
int main()
{
	int i,num;
	scanf("%d",&num);
	while(num--)
	{
		for(i = 0; i < 3; i++)
			scanf("%s%s%s",left[i],right[i],result[i]);
		for(i = 0; i < 12; i++)
			status[i] = 0;
		for(i = 0; i < 12; i++)
		{
			status[i] = 1;    //��iöӲ���ǽ��ؼٱ� 
			if(Balanced())    
				break;
			status[i] = -1;   //��iöӲ���ǽ���ٱ� 
			if(Balanced())
				break;
			status[i] = 0;	  //��iöӲ������� 
		}
		printf("%c is the counterfeit coin and it is %s.\n",i+'A',status[i] > 0?"heavy":"light");
	}
	return 0; 
} 
