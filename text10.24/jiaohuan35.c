#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int tmp=0;
    tmp = a;
    a = b;
    b = tmp;
    printf("%d %d",a,b);
    return 0;
}