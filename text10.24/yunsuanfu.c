#include<stdio.h>
int main()
{
    int a,b;
    int sum,sub,mult,div,mod;
    printf("请输入两个整数:\n");
    scanf("%d %d",&a,&b);
    sum = a+b;
    sub = a-b;
    mult = a*b;
    div = a/b;
    mod = a%b;
    printf("a = %d\n",a);
    printf("b = %d\n",b);
    printf("%d+%d=%d\n",a,b,a+b);
    printf("%d-%d=%d\n",a,b,a-b);
    printf("%d*%d=%d\n",a,b,a*b);
    printf("%d/%d=%d\n",a,b,a/b);
    printf("%d %% %d=%d\n",a,b,a%b);
    return 0;
}