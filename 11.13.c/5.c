#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a,b,sum;
    char x;
    scanf("%d%c%d=%d",&a,&x,&b,&sum);
    if(a+b==sum||a-b==sum||a*b==sum||a/b==sum)
        printf("1\n");
    else
        printf("0\n");
}
 