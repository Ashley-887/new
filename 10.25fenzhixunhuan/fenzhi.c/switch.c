//switch(c)语句中，c可以是int，long，char等整型，但不能是float
#include<stdio.h>
int main()
{
    int year,month;
    printf("请输入日期:");
    scanf("%d%d",&year,&month);
    switch(month)
    {
        case 1:case 3:case 5:case 7:case 8:case 10:case 12:
          printf("31天");
          break;//若正确，到此为止
        case 4:case 6:case 9:case 11:
          printf("30天");
          break;
        case 2:
          if(year%400==0||(year%4==0 && year%100!=0))//能被400整除或能被4整除但不能被100整除
            printf("29天");
          else
            printf("28天");



    }
    return 0;
}