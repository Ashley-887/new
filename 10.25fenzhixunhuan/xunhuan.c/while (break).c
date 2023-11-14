//while为真循环，打印1到10
//先判断循环条件是否成立才能进入循环
//while(!e)中的条件!e等价于e==0
#include<stdio.h>
int main()
{
    int n = 1;
    while(n<=10)
    {
        if(n==5)
          break;//停止后面的所有循环，永久终止循环
        printf("%d",n);
        n++;
    }
    return 0;
}