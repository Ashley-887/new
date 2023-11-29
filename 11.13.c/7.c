
//     #include <stdio.h>

// int main() {
//     int num1, num2;
//     int sum,count;
//     scanf("%d %d", &num1, &num2);
//     if(num1>num2)
//     {
//         int temp=num1;
//         num1=num2;
//         num2=temp;
//     }
//     for(int i=num1;i<=num2;i++)
//     {
//         sum+=i;
//         count++;
//     }
//     double average=(double)sum/count;
//     printf("%.2lf",average);


    
//     return 0;
//}
#include <stdio.h>

int main() {
    int num1, num2;

    // 提示用户输入两个整数
    printf("请输入两个整数，用空格分隔: ");

    // 读取用户输入
    scanf("%d %d", &num1, &num2);

    // 计算整数间所有整数的平均值
    int sum = 0;
    int count = 0;

    // 确保num1小于等于num2
    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    for (int i = num1; i <= num2; ++i) {
        sum += i;
        count++;
    }

    // 计算平均值并保留两位小数
    double average = (double)sum / count;

    // 输出结果
    printf("两个整数间所有整数的平均值是: %.2lf\n", average);

    return 0;
}
