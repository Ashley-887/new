#include <stdio.h>

int main() {
    int a, n;

    
    // 读取用户输入
    scanf("%d %d", &a, &n);

    // 初始化变量，用于存储结果
    int sum = 0;
    int term = 0;
    int multiplier = 1;

    // 计算 s = a + aa + aaa + ... 的值
    for (int i = 0; i < n; ++i) {
        term = term + a * multiplier;
        sum = sum + term;
        multiplier = multiplier * 10;
    }

    // 输出结果
    printf("%d\n", sum);

    return 0;
}
