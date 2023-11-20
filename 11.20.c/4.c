#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",y(n));

    return 0;
}

int y(int n)
{
    if(n==1||n==2)
    return 1;
    else
    return y(n-1)+y(n-2);
}