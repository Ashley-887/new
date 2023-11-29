#include <stdio.h>

int main() {
    int totalSeconds;

    // 提示用户输入代表秒数的整数
    printf("请输入代表秒数的整数: ");

    // 读取用户输入
    scanf("%d", &totalSeconds);

    // 计算时、分、秒
    int hours, minutes, seconds;

    // 计算小时
    hours = totalSeconds / 3600;

    // 计算剩余秒数
    int remainingSeconds = totalSeconds % 3600;

    // 计算分钟
    minutes = remainingSeconds / 60;

    // 计算剩余秒数
    seconds = remainingSeconds % 60;

    // 输出结果
    printf("%d秒表示为: %d小时 %d分钟 %d秒\n", totalSeconds, hours, minutes, seconds);

    return 0;
}
