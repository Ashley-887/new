#include<stdio.h>
int main()
{
    double a,b;
    scanf("%lf %lf",&a,&b);
    double perimeter = 2*(a+b);
    double area = a*b;
    printf("perimeter=%.0lf\n",perimeter);
    printf("area=%.0lf\n",area);
    return 0;
}