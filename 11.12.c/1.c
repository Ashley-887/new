
// #include <stdio.h>

// int main() {
//     int decimalNum;
    
//     // 读取用户输入
//     scanf("%d", &decimalNum);

//     // 输出十六进制数的倒序
//     // printf("0x");
    
//     // 循环打印每个十六进制位
//     while (decimalNum > 0) {
//         int remainder = decimalNum % 16;

//         // 将余数转换为十六进制位，并输出
//         if (remainder < 10) {
//             printf("%d", remainder);
//         } else {
//             printf("%c", 'A' + (remainder - 10));
//         }

//         decimalNum /= 16;  // 右移四位，相当于除以16
//     }

//     printf("\n");

//     return 0;
// }

#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    char hex[20]; // 定义十六进制字符串
    
    scanf("%d", &n); // 读取十进制数

    sprintf(hex, "%X", n); // 将十进制数转换为十六进制字符串
    int len = strlen(hex); // 获取十六进制字符串长度

    for (int i = len-1; i >= 0; i--)
    {
        printf("%c", hex[i]); // 逆序输出十六进制字符串
    }

    return 0;
}