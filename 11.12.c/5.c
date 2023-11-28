#include <stdio.h>

int main() {
    int number;
    int sum_odd = 0;
    int sum_even = 0;

    

    // 读取用户输入
    scanf("%d", &number);

    // 处理输入，计算奇数和偶数的和
    while (number != -1) {
        if (number % 2 == 0) {
            // 偶数
            sum_even += number;
        } else {
            // 奇数
            sum_odd += number;
        }

        // 读取下一个整数
        scanf("%d", &number);
    }

    // 输出结果
    printf("%d %d", sum_odd,sum_even);
    return 0;
}
