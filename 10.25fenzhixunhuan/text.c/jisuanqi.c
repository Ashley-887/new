#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x,y;
    char ch;
    scanf("%d %d %c",&x,&y,&ch);
    //如果出现无效的操作符，则输出：Invalid operator!
    if(ch!='+' && ch!='-' && ch!='*' && ch!='/' && ch!='%')
    {
        printf("Invalid operator!");
    }
    else
    {
        if(ch=='+')printf("%d",x+y);
        if(ch=='-')printf("%d",x-y);
        if(ch=='*')printf("%d",x*y);
        if(ch=='/')
        {
            if(y==0)
            {
                printf("divided by zero!");
            }
            else
            {
                printf("%d",x/y);
            }
        }
        if(ch=='%')
           printf("%d",x%y);


    }
    return 0;
}