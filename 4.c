//输入某年某月某日，判断这一天是这一年的第几天
//闰年or平年
//数组 for循环
#include<stdio.h>
int main()
{
    int year,month,day,result;
    scanf("%d %d %d",&year,&month,&day);
    result=days(year,month,day);
    printf("%d",result);
    return 0;
}

int days(int year,int month,int day)
{
    int totaldays=0;
    int daysinmonth[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    if((year%4==0&&year%100!=0)||(year%400==0)){
        daysinmonth[2]=29;
    }
    for(int i=1;i<month;i++){
        totaldays+=daysinmonth[i];
    }
    totaldays+=day;
    return totaldays;
}


