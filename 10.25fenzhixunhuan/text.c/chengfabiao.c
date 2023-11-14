#include<stdio.h>
int main()
{
    for(int i=1;i<=9;i++)
    {
        for(int j=1;j<=i;j++)
           printf("%d*%d=%-5d",j,i,i*j);
                   //间隔5字符，左对齐
           printf("\n");
    }
    return 0;
}