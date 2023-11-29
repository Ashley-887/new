#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x;
    double y;
    scanf("%d",&x);
    if(x<=100)
    {printf("20.00");}
    else if(x>100) 
    {
        y=20.00+(x-100.00)*0.20;
        printf("%.2f",y);
    }
    return 0;
}
