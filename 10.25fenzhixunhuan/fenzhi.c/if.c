#include<stdio.h>
int main()
{
    int age;
    printf("请输入年龄：");
    scanf("%d",&age);
    
    if(age<18)
       printf("未成年\n");
    else if(age>=18 && age<28)
       printf("青年\n");
    else if(age>=28 && age<50)
       printf("壮年\n");
    else //else与最近的if匹配，与位置无关
       printf("老年\n");
    return 0;
}