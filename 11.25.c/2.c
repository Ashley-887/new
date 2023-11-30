#include <stdio.h>
#include <ctype.h>

int main() {
    char c, prev;
    int first_char = 1;

    printf("请输入一行字符：\n");

    while ((c = getchar()) != '\n') {
        if (islower(c)) {  // 判断字符是否为小写形式
            if (first_char) {
                c = toupper(c);  // 将第一个字母改成大写形式
                first_char = 0;
            }
        } else {
            first_char = 1;  // 重置连续字母的起始标志
        }

        printf("%c", c);  // 输出字符
    }

    printf("\n");

    return 0;
}