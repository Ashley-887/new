//do...while循环打印1到10
//先执行一次再判断，循环体至少可以循环一次
#include<stdio.h>
int main()
{
    int n = 1;
    do
    {
        printf("%d",n);
        n++;
    }
    
    while(n<=10); 
    return 0;
}