//for循环打印1到10
//for(表达式1;;表达式3),循环条件缺为真，可以用任意非0数表示
#include<stdio.h>
int main()
{
    int n = 0;
    for(n=1;n<=10;n++)//集中初始化；判断；调整
    {
        if(n==5)
          continue;//终止本次循环，继续下一次循环
        printf("%d",n);
    }

    return 0;
}