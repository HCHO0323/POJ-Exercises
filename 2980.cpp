//#include<iostream>
//#include<cmath>
//#include<cstring>
//using namespace std;
//int main(){
//	char a[2050];
//	char b[2050];
//	int c[4100];  // xiao duan xu 
//	int aint[2050] = {0};
//	int bint[2050] = {0};
//	bool head = false;
//	int headnum = 0;
//	memset(a,0,sizeof(a));
//	memset(b,0,sizeof(b));
//	memset(c,0,sizeof(c));
//	cin >> a;
//	cin >> b;
//	int lena = strlen(a);
//	int lenb = strlen(b);
//	//int k = 0;
//	for(int i = 0;i<lena ;i++)
//	{
//		aint[i] = a[i] - '0';
//		//k++;
//	}
//	for(int i = 0;i<lenb;i++)
//	{
//		bint[i] = b[i] - '0';
//	//	k++;
//	}
//	for(int i = lena - 1;i>=0 ; i--){
//		for(int j = lenb - 1;j>=0; j--){
//			c[i+j] += (aint[i] * bint[j]) ;
//		}
//	}
//	for(int i = lena+lenb;i>=0;i--){
//		if((c[i]/10)>0)
//			{
//				if(i == 0) {
//							headnum = c[i] / 10;
//							c[i] = c[i] - (c[i]/10) * 10;
//							}
//				else{
//				
//				c[i-1] = c[i-1] + (c[i]/10);
//				c[i] = c[i] - (c[i]/10) * 10;
//			}
//			}
//	}
//	for(int i = 0;i<lena + lenb -1; i++)
//	{
//		if(headnum) {cout << headnum; headnum = 0;}
//		if(c[i] != 0 && head == false)	head = true;
//		if(head == true)
//			cout << c[i];
//	}
//	if(head == false)	cout << "0";
//	return 0;
//}
// ����һ��Ҫ��0��ʼ�����Ӻ�ʼ����ֲ��ԳƵ����
#include<stdio.h>
#include<string.h>
#define MAX_LEN 200
unsigned an1[ MAX_LEN + 5 ];
unsigned an2[ MAX_LEN + 5 ];
unsigned aResult[ MAX_LEN * 2 + 10 ];
char szLine1[ MAX_LEN + 5 ];
char szLine2[ MAX_LEN + 5 ];
int main()
{
	gets( szLine1 );
	gets( szLine2 );
	int i, j;
	memset( an1, 0, sizeof( an1 ) );
	memset( an2, 0, sizeof( an2 ) );
	memset( aResult, 0, sizeof( aResult ) );
	
	int nLen1 = strlen( szLine1 );  //szLine1���� 
	j = 0;
	for( i = nLen1 - 1; i >= 0; i-- )
		an1[ j++ ] = szLine1[ i ] - '0';
	
	int nLen2 = strlen( szLine2 ); //szLine2���� 
	j = 0;
	for( i = nLen2 - 1; i >= 0; i-- )
		an2[ j++ ] = szLine2[ i ] - '0';
	
	for( i = 0; i < nLen2; i++ )
	{
		for( j = 0; j < nLen1; j++ )   
			aResult[ i + j ] += an2[ i ] * an1[ j ];// an1[ j ] * an2[ i ] ����ۼӵ��� i + j λ ���������Ȳ�Ҫ��λ���� 
	}
	
	for( i = 0; i < MAX_LEN * 2; i++ )
	{
		if( aResult[ i ] >= 10 )   //��λ���� 
		{
			aResult[ i + 1 ] += aResult[ i ] / 10;
			aResult[ i ] %= 10;
		}
	}
	int flag = 0;  
	for( i = MAX_LEN * 2; i >= 0; i-- )
		if( flag )
			printf( "%d", aResult[ i ] );//��� ͬ�������ӷ� 
		else if( aResult[ i ] )
		{
			printf( "%d", aResult[ i ] );
			flag = 1;
		} 
	if( flag == 0 )  //��Ϊ 0 ����� 
		printf( "0" );
	return 0;
} 
