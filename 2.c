//利润 分层计算
#include<stdio.h>
int main()
{
    int profit,bonus;
    scanf("%d",&profit);
    if(profit<=100000){
        bonus=profit*0.1;
    }else if(profit<=200000){
        bonus=100000*0.1+(profit-100000)*0.075;
    }
    printf("%d",bonus);
    return 0;
}
