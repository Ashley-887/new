//递归的两个条件：1.存在限制条件，当满足这个限制条件时，递归停止
               //2.每次递归后越来越接近这个条件
// 接受一个整型值(无符号)，按照顺序打印它的每一位
// 输入1234，输出1 2 3 4
// 1234%10=4 （1234/10=123）123%10=3......
#include<stdio.h>
int main()
{  //unsigned表示无符号数，signed表示有符号数，一般不写
    unsigned int num=0;
    scanf("%u",&num);//%u表示无符号数，%d表示有符号数
    print(num);
    return 0;
}

void print(unsigned int n)
{
    if(n>9)
    {
        print(n/10);
    }
    printf(" %d",n%10);
}
