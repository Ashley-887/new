#include <stdio.h>

int main() {
    int num1, num2, num3;
    int sum;
    float avg;

    printf("请输入三个整数：");
    scanf("%d %d %d", &num1, &num2, &num3);

    sum = num1 + num2 + num3;
    avg = sum / 3.0;

    printf("大于平均数的整数有：");
    if (num1 > avg) { 
        printf("%d ", num1);
    }
    if (num2 > avg) {
        printf("%d ", num2);
    }
    if (num3 > avg) {
        printf("%d ", num3);
    }

    return 0;
}
