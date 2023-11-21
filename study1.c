//数组是一组相同类型元素的集合

#include<stdio.h>


//Notice:1.数组的创建
//创建方式:type_t    arr_name    [const_n];
//       元素类型    数组名   常量表达式，指定数组大小
   
int main()
{
   
    int arr[10];
    char ch[5];
    double date1[20];
    double date2[15+5];//常量表达式

    //以下表达式只能在支持c99的编译器上使用
    int n=10;
    scanf("%d",&n);
    int arr[n];

    return 0;
}



//Notice:2.数组的初始化
//在创建数组时给一些合适的初始值
int main()
{
    //不完全初始化，剩余元素默认为0
    int arr[10]={1,2,3};
    int arr1[10]={1,2,3,4,5,6,7,8,9,0};
    int arr2[]={1,2,3};//只有三个元素

    char ch1[10]={'a','b','c'};
    char ch2[10]="abc";
    //a b c \0 0 0 0 0 0 0
    
    return 0;
}


//Notice:3.一维数组的使用
int main()
{
   //[]-下标引用操作符
   //printf("%d\n",arr[4]);
   int arr[]={1,2,3,4,5,6,7,8,9,10};
    //对应下标 0 1 2 3 4 5 6 7 8 9
   int i;
   int sz=sizeof(arr)/sizeof(arr[0]);//10
   //正序输出
   for(i=0;i<sz;i++)
   {
    printf("%d",arr[i]);
   }

   //倒序输出
   for(i=sz-1;i>=0;i--)
   {
    printf("%d",arr[i]);
   }

    return 0;
}


//Notice:4.一维数组在内存中的存储
//数组在内存中是连续存放的，差四个字节


//Notice:5.二维数组的创建和初始化
int main()
{
    int arr[3][4]={1,2,3,4,5,6,7,8,2,3,4,5};
          //3行4列  一行排完排下一行，不够用0
    int arr[3][4]={{1,2},{3,4},{5,6}};
             //每行两个数
    int arr[][4]={{1,2,3,4},{2,3}};  //1,2,3,4
    //行能省略，但一行有几个元素不能省略  2,3,0,0
    
    return 0;
}

//Notice:6.二维数组的使用
int main()
{
    int arr[3][4]={1,2,3,4,2,3,4,5,3,4,5,6};
    int i;
    for(i=0;i<3;i++)
    {
        int j;
        for(j=0;j<4;j++)
        {
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

//Notice:7.二维数组在内存中的存储
//1 2 3 4| 2 3 4 5| 3 4 5 6
//arr[0]   arr[1]   arr[2]
int main()
{
    int arr[3][4]={1,2,3,4,2,3,4,5,3,4,5,6};
    int i;
    for(i=0;i<3;i++)
    {
        int j;
        for(j=0;j<4;j++)
        {
            //取地址
            printf("&arr[%d][%d]=%p\n",i,j,arr[i][j]);
        }
    }
    return 0;
}

//Notice:8.数组越界
//做好越界检查，确保下标不要超过范围

//Notice:9.数组作为函数参数





    
