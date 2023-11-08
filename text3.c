#include<stdio.h>
#include<stdlib.h>
int peach(int a,int b)
{
    if(a==0)
    {
        printf("%d",b);
    }
    else
    {
        a--;
        b=(b+1)*2;
        return peach(a,b);
    }
}

int main()
{
    int a,b;
    printf("第a天吃完后剩b个桃子:");
    scanf("%d%d",&a,&b); 
    peach(a,b);
    return 0;
}
