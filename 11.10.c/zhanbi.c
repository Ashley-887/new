#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    double total = a+b;
    double percentage1 = (a/total)*100;
    double percentage2 = (b/total)*100;
    printf("%.2lf%% %.2lf%%",percentage1,percentage2);

    return 0;
}