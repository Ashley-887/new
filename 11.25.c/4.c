#include<stdio.h>
int inverse(int num)
{
    int reversed=0;
    while(num>0)
    {
        int digit=num%10;
        reversed=reversed*10+digit;
        num/=10;
    }
    return reversed;
}

int main()
{
    int n;
    scanf("%d",&n);
    int  inversedn=inverse(n);
    int sum=n+inversedn;
    printf("%d",sum);
    return 0;
}