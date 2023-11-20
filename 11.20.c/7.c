#include <stdio.h>

// 函数用于输出数字三角形
void printNumberTriangle(int n) {
    int i, j;

    // 外层循环控制行数
    for (i = 1; i <= n; i++) {
        // 内层循环控制每行的数字输出
        for (j=1;j<=i;j++) {
            printf("%d ",i);
        }
        printf("\n"); // 换行
    }
}

int main() {
    int n;

    // 提示用户输入一个整数
    printf("请输入一个整数: ");
    scanf("%d", &n);

    // 调用函数输出数字三角形
    printNumberTriangle(n);

    return 0;
}
