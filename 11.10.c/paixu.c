#include <stdio.h>

int main() {
    int num1, num2, num3;

    // 提示用户输入三个数
    printf("请输入三个数（用空格分隔）: ");

    
    // 读取用户输入
    scanf("%d %d %d", &num1, &num2, &num3);
    if(num1==num2||num2==num3||num1==num3)
{
     return 1;
} 
   // 排序
    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    if (num2 > num3) {
        int temp = num2;
        num2 = num3;
        num3 = temp;
    }

    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    // 输出结果
    printf("从小到大排序: %d, %d, %d\n", num1, num2, num3);

    return 0;
}
