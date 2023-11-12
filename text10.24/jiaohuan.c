#include<stdio.h>
int main()
{
    int a,b;
    printf("请输入a的值:\n");
    scanf("%d",&a);
    printf("请输入b的值:\n");
    scanf("%d",&b);

    printf("a=%d,b=%d",a,b);
    int tmp = 0;
    tmp = a;
    a = b;
    b = tmp;
    printf("a,b交换后:\n");
    printf("a=%d,b=%d",a,b);


    return 0;
}