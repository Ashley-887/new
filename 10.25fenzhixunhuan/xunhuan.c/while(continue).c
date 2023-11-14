//while为真循环，打印1到10
#include<stdio.h>
int main()
{
    int n = 0;
    while(n<=10)
    {
        n++;
        if(n == 5)
          continue;//终止本次循环，continue后的代码不会执行，直接跳转到while语句的判断部分进行下一次
        printf("%d",n);
    }
    return 0;
}