 #include<stdio.h>
//指针类型
//char*  int* float* int(*a)[n] double*

//初始化
//1.空地址NULL int*pa=NULL
//2.已声明的变量或数组的地址 int x=1;
                         //int *px=&x;

//*与&为互逆运算
//int a=10,b=0;
//b=*(&a);//即b=a

//利用指针变量处理数据
int main()
{
    double x=2;
    double*px=&x;
    scanf("%lf",px);
    printf("%lf",x);
    return 0;
}

//指针的指针(二级指针)
int **ppa,*pa,a;
pa=&a;
ppa=&pa;

int main()
{
    int a=10;
    int *pa=&a;
    int **ppa=&pa;

    *pa=100;//地址pa加*返回到a，即a=100
    **ppa=200;//*ppa为pa，再结合剩下的*得到a
    return 0;
}

//指针类型函数
int main()
{
    long*p;
    long score[5]={1,2,3,4,5};
    p=GetMax(score);
    printf("%d",*p);
    return 0;
}
long *GetMax(long*score)
{
    int max=score[0];
    for(int i=1;i<5;i++){
        if(score[i]>max){
            max=score[i];
        }
    }
    return max;
}

//指针与数组
