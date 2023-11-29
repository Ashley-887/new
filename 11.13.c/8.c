#include<stdio.h>
#include<stdlib.h>

int main()
{
    int max,min,x;
    scanf("%d",&x);
    max=x;
    min=x;
    while(1){
        scanf("%d",&x);
        if(x==-1)
            break;
        if(x>max)
            max=x;
        if(x<min)
            min=x;
    }
    printf("%d %d",max,min);
}