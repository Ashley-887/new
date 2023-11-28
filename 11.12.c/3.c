#include <stdio.h>
#include <ctype.h>

int main() {
    char c;
    int letters = 0, digits = 0, others = 0; // 定义三个统计变量
    
    for (int i = 0; i < 10; i++) {
        scanf("%c", &c); // 读取一个字符
        if (isalpha(c)) { // 如果是字母
            letters++;
        } else if (isdigit(c)) { // 如果是数字
            digits++;
        } else { // 否则为其他字符
            others++;
        }
    }

    printf("%d\n%d\n%d\n", letters, digits, others); // 输出统计结果

    return 0;
}