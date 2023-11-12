#include<stdio.h>
#include<stdlib.h>
int main(int argc, char*argv[])
{
    int a,b;
    printf("请输入两个数字:");
    scanf("%d%d",&a,&b);
    printf("%d+%d=%d\n",a,b,a+b);
    printf("%d-%d=%d\n",a,b,a-b);
    printf("%d*%d=%d\n",a,b,a*b);
    printf("%d/%d=%f\n",a,b,1.*a/b);
    return 0;
}
