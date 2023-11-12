#include<stdio.h>
int main()
{
    float a,b,c,d;
    scanf("%f %f %f %f",&a,&b,&c,&d);
    float ave = (a+b+c+d)/4;
    printf("%.2lf",ave);
    return 0;
}