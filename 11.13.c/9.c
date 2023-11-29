// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int x,y;
//     scanf("%d %d",&x,&y);
//     int s=x^2+y^2;
//     if(s>100)
//     printf("%d",x+y);
//     else
//    { printf("%d",x*y);
//        }   
//         return 0;
// }
#include <stdio.h>

int main() {
    int num1, num2;

    // 提示用户输入两个整数
    printf("请输入两个整数，用空格分隔: ");

    // 读取用户输入
    scanf("%d %d", &num1, &num2);

    // 计算平方和
    int squareSum = num1 * num1 + num2 * num2;

    // 判断平方和是否大于100
    if (squareSum > 100) {
        // 如果平方和大于100，输出它们的和
        printf("平方和大于100，它们的和是: %d\n", num1 + num2);
    } else {
        // 如果平方和不大于100，输出它们的积
        printf("平方和不大于100，它们的积是: %d\n", num1 * num2);
    }

    return 0;
}


