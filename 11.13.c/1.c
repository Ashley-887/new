#include <stdio.h>
#include <stdlib.h>

int main()
{

    int m,n,a,b;
    scanf("%d",&n);
    a = 2;
    b = 1;
    for(int i=1;i<=n-1;i++)
    {
        m=a+b;
        b=a;
        a=m;

    }
    printf("%d/%d",a,b);

}










// #include <stdio.h>

// double generateSequence(int n) {
//     if (n == 1) {
//         return 2.0;
//     }

//     double current = 2.0;
//     double prev1 = 2.0;
//     double prev2 = 1.0;

//     for (int i = 2; i <= n; ++i) {
//         current = prev1 + prev2;
//         prev2 = prev1;
//         prev1 = current;
//     }

//     return current;
// }

// int main() {
//     int n;

//     // 提示用户输入正整数 n
//     printf("请输入一个正整数 n: ");

//     // 读取用户输入
//     scanf("%d", &n);

//     // 输出数列的第 n 项
//     if (n < 1) {
//         printf("请输入一个大于等于1的整数。\n");
//     } else {
//         printf("数列的第 %d 项是: %.2lf\n", n, generateSequence(n));
//     }

//     return 0;
// }
// #include <stdio.h>

// int fibonacciRatio(int n) {
//     if (n == 1) {
//         return 2 / 1;
//     }

//     int current = 0;
//     int prev1 = 2;
//     int prev2 = 1;

//     for (int i = 2; i <= n; ++i) {
//         current = prev1 + prev2;
//         prev2 = prev1;
//         prev1 = current;
//     }

//     return current / prev2;
// }

// int main() {
//     int n;

//     // 提示用户输入正整数 n
//     printf("请输入一个正整数 n: ");

//     // 读取用户输入
//     scanf("%d", &n);

//     // 输出数列的第 n 项
//     if (n < 1) {
//         printf("请输入一个大于等于1的整数。\n");
//     } else {
//         printf("数列的第 %d 项是: %d\n", n, fibonacciRatio(n));
//     }

//     return 0;
// }



