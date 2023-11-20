#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",f(n));
    return 0;
}

int f(int n)
{
    if(n<10)
    {
        return n;
    }
    else{
        return n%10+f(n/10);
    }
}