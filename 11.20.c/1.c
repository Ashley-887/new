#include<stdio.h>
#include<math.h>
int main()
{
    float x,y;
    scanf("%f",&x);
    if(x>=0)
    {
    y=sqrt(x);
      printf("%f",y);
      }
    else
    {
        y=pow(x+1,2)+2*x+1/x;
      printf("%f",y);
    }
    return 0;
}