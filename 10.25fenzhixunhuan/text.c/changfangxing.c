#include<stdio.h>
int main()
{
    int line,col,i,j;
    scanf("%d%d",&line,&col);
    for(i=1;i<=line;i++)
       {
        for(j=1;j<=col;j++)
          {
            printf("*");
          }
          printf("\n");
       }

    return 0;
}