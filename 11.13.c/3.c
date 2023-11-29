#include <stdio.h>

int main() {
    int num1, num2, num3;

    // 提示用户输入三个整数
    printf("请输入三个整数，用空格分隔: ");

    // 读取用户输入
    scanf("%d %d %d", &num1, &num2, &num3);

    // 构成的三位数
    int threeDigitNumber = num1 * 100 + num2 * 10 + num3;

    // 计算奇数的个数
    int oddCount = 0;

    // 分别判断百位、十位、个位是否为奇数
    if (threeDigitNumber / 100 % 2 == 1) {
        oddCount++;
    }
    if (threeDigitNumber / 10 % 10 % 2 == 1) {
        oddCount++;
    }
    if (threeDigitNumber % 10 % 2 == 1) {
        oddCount++;
    }

    // 输出结果
    printf("构成的三位数中奇数的个数是: %d\n", oddCount);

    return 0;
}
