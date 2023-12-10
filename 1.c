//三位数 1~4 各不相同
//个十百abc a+b*10+c*100
#include<stdio.h>
int main()
{
    int a,b,c;
    int count=0;
    for(c=1;c<5;c++)
    {
        for(b=1;b<5;b++)
        {
            for(a=1;a<5;a++)
            {
                if(c!=b&&b!=a&&a!=c)
                {
                    printf("%d,%d,%d\n",c,b,a);
                    count++;
                }
            }
        }
    }
    printf("count=%d\n",count);
    return 0;
}