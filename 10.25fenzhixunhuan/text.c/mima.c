#include<stdio.h>
#include<stdlib.h>
int main()
{
    float a,b;
    int i=0;
    char op;
    char password[20]={"1111"};
    printf("请输入验证码：");
    fflush(stdin);
    scanf("%4c",&password);
    for (i=1;i<=3;i++)
    {
        if(0==strcmp(password,"1111"))
        {
            printf("进入计算器");
        }
        else
        {printf("请再一次输入:\n");
         printf("你还有%d次机会\n",3-i);
         printf("请输入验证码：");
         scanf("%4c",&password);
           if(3-i==1)
           {
              printf("当前禁止输入,请于3分钟后重试!\n");
              goto label;
           }
        }
    }

    double num1, num2, result;
     printf("请输入第一个数:");
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
    label:
    return 0;
}