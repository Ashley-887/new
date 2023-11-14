#include <stdio.h>
int main() {
    char op;  // 运算符
    double num1, num2, result;  // 数值和结果
    
    printf("请输入第一个数：");
    scanf("%lf", &num1);  // 读取第一个数值

    while (1)
    {
        printf("请输入运算符和第二个数，输入 q 退出：");
        scanf(" %c", &op);  // 读取运算符（注意前面的空格，以避免格式错误)
        
        if (op == 'q') {
            break;  // 输入 q 退出循环
        }
        
        scanf("%lf", &num2);  // 读取第二个数值
        
        switch(op) {  // 根据运算符进行相应的计算
            case '+':
                result = num1 + num2;
                break;
            case '-':
                result = num1 - num2;
                break;
            case '*':
                result = num1 * num2;
                break;
            case '/':
                result = num1 / num2;
                break;
            default:
                printf("错误的运算符，请重新输入。\n");
                continue;  // 输入错误的运算符时，提示错误并重新输入
        }
        
        num1 = result;  // 更新操作数为上一次的结果
        printf("结果：%g\n", result);  // 输出本次运算的结果
    }

    return 0;
}