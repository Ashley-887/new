#include <stdio.h>
#include <ctype.h>

int main() {
    char target;
    char currentChar;
    int position = 0;
    int firstOccurrence = -1;
    int lastOccurrence = -1;

target = getchar();
target = tolower(target); // 转换为小写字符
currentChar = getchar();
    

    // 获取输入字符并查找目标字符位置
    while ((currentChar = getchar()) != '\n') {
        currentChar = tolower(currentChar); // 转换为小写字符

        if (currentChar == target) {
            if (firstOccurrence == -1) {
                firstOccurrence = position;
            }
            lastOccurrence = position;
        }

        position++;
    }

    // 输出结果
    if (firstOccurrence != -1) {
        printf("%d %d", firstOccurrence,lastOccurrence);
  } else {
        printf("-1\n");
    }

    return 0;
}
