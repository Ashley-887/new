#include <stdio.h>

int main() {
    float number;

    // 提示用户输入单精度浮点数
    printf("请输入一个单精度浮点数: ");
    
    // 读取用户输入
    scanf("%f", &number);

    // 计算绝对值
    if (number < 0)
    {
        printf("%f",-number);
    }
    else
    {
        printf("%f",number);
    }




    return 0;
}
