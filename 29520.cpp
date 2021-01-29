#include <stdio.h>
#include <string.h>
char n[61];
int num[60],len,num_loop[60][60],res[61];
void multiply(int a)//将num乘a存在res中
{
    int i;
    for(i = 0;i < len;i++)
        res[i] = num[i] * a;
    for(i = 0;i < len;i++)
    {
        res[i+1] += res[i] / 10;
        res[i] %= 10;
    }
}
int num_compare()//查看num_loop中是否有与res相同的数，如果有返回1，否则返回0
{
    int i,j;
    for(i = 0;i < len;i++)
    {
        for(j = 0;j < len;j++)
            if(num_loop[i][j] != res[j])
                break;
        if(j == len)
            break;
    }
    if(i < len) return 1;
    return 0;
}
int main()
{
    int i,j;
    scanf("%s",n);
    len = strlen(n);
    for(i = len-1,j=0;i >= 0;i--,j++)
        num[j] = n[i] - '0';
    for(i = 0;i < len;i++)
        num_loop[0][i] = num[i];
    for(i = 1;i < len;i++)
    {
        int tmp = num_loop[i-1][0];
        for(j = 0;j < len-1;j++)
            num_loop[i][j] = num_loop[i-1][j+1];
        num_loop[i][j] = tmp;
    }
    multiply(2);
    num_compare() ? printf("%d",1) : printf("%d",0);
    return 0;
}
