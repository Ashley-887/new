//用*输出字母C的图案
#include<stdio.h>
int main()
{
    int j=8;
    for(int i=1;i<j;i++)
    {
        printf("*");
    }
    printf("\n");
    for(int i=1;i<j;i++)
    {
        printf("*\n");
    }
    for(int i=1;i<j;i++)
    {
        printf("*");
    }
    printf("\n");
    return 0;
}