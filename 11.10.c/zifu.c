#include <stdio.h>

int main() {
    char inputChar;

    // 提示用户输入一个字符
    printf("请输入一个字符: ");
    
    // 读取用户输入
    scanf(" %c", &inputChar);  // 注意这里有一个空格，用于消耗可能的换行符

    // 判断输入字符类型
    if (inputChar >= '0' && inputChar <= '9') {
        // 输入是数字，输出相应整数值
        int intValue = inputChar - '0';
        printf("输入是数字，相应整数值为: %d\n", intValue);
    } else {
        // 输入不是数字，输出ASCII码
        printf("输入不是数字，ASCII码为: %d\n", inputChar);
    }

    return 0;
}
