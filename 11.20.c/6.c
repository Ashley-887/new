#include<stdio.h>
#include<math.h>
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    printf("%d",f(m,n));
    return 0;
}

int isprime(int n)
{
    int i;
    if(n<=1)
    {
        return 0;
    }
    for(i=2;i*i<=n;i++)
    {
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int f(int m,int n)
{
    int sum=0;
    for(int i=m;i<=n;i++)
    {
        if(isprime(i))
        {
            sum+=i;
        }
    }
    return sum;
}