#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("%d %d",a,b);
    return 0;
}
int swap(int*pa,int*pb)
    {
        int t;
        t=*pa;
        *pa=*pb;
        *pb=t;
    }
