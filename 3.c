//打印100到200间的素数
#include<stdio.h>
#include<math.h>
int main()
{
    int i=0;
    for(i=100;i<=200;i++)
    {
        if(is_prime(i)==1)
           printf(" %d",i);
    }
    return 0;
}
//是素数返回1，不是返回0
int is_prime(int n)
{
    int j=0;
    for(j=2;j<n;j++)
    {
        if(n%j==0)
          return 0;
    }
    return 1;
}