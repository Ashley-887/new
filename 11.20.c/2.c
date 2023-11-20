// #include <stdio.h>

// // 计算阶乘的函数
// int factorial(int n) {
//     if (n == 0 || n == 1) {
//         return 1;
//     } else {
//         return n * factorial(n - 1);
//     }
// }

// // 计算组合数的函数
// int combination(int n, int r) {
//     if (r == 0 || r == n) {
//         return 1;
//     } else {
//         return factorial(n) / (factorial(r) * factorial(n - r));
//     }
// }

// int main() {
//     int n, r;

//     // 提示用户输入参数
//     printf("请输入n和r（用空格分隔）: ");
//     scanf("%d %d", &n, &r);

//     // 检查输入是否合法
//     if (n < 0 || r < 0 || n < r) {
//         printf("输入不合法，请确保n和r都为非负数且n不小于r。\n");
//         return 1;  // 返回非零值表示程序异常结束
//     }

//     // 计算并输出阶乘和组合数
//     printf("%d的阶乘是：%d\n", n, factorial(n));
//     printf("C(%d, %d)是：%d\n", n, r, combination(n, r));

//     return 0;
// }



#include<stdio.h>
#include<stdlib.h>
int main()
{
   int m,n;
   scanf("%d %d",&n,&m);
   printf("%d\n",C(n,m));
}

int P(int n)
{
   if(n==0)
    {
        return 1;
    }
    else{
        return n*P(n-1);
    }
}
int C(int n,int m)
{
    return P(n)/(P(m)*P(n-m));
}