#include<stdio.h>
#include<stdlib.h>

int main()
{
    int x,y;
    scanf("%d",&x);
    if(x>0){
        y=2*x-1;
        printf("%d\n",y);
    }else if(x<0){
           y=2*x+1;
           printf("%d\n",y);
           }else{
           printf("0",y);
           }

}