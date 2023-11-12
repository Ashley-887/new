#include<stdio.h>
#include<math.h>
int main()
{
    int n,stamps;
    printf("how many stamps:");
    scanf("%d",&n);
    stamps=ceil(n/5.0);//除5并向上取整
    printf("stamp=%d",stamps);

    return 0;
}