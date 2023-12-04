// #include <stdio.h>
// #include <string.h>

// // 函数用于判断字符串是否在数组中
// int isInArray(char str[], char array[][100], int size) {
//     for (int i = 0; i < size; ++i) {
//         if (strcmp(str, array[i]) == 0) {
//             return 1; // 找到字符串
//         }
//     }
//     return 0; // 未找到字符串
// }

// int main() {
//     // 定义字符串数组
//     char array1[10][100], array2[10][100], result[10][100];
//     int size1 = 0, size2 = 0, resultSize = 0;
//     while (scanf("%s", array1[size1]) == 1 && strcmp(array1[size1], "#") != 0) {
//         size1++;
//     }
//     while (scanf("%s", array2[size2]) == 1 && strcmp(array2[size2], "#") != 0) {
//         size2++;
//     }
//     for (int i = 0; i < size1; ++i) {
//         if (isInArray(array1[i], array2, size2) && !isInArray(array1[i], result, resultSize)) {
//             strcpy(result[resultSize], array1[i]);
//             resultSize++;
//         }
//     }
//     int intersectionFound=0;
//     if(!intersectionFound){
//         printf("NULL\n");
//     }
//     for (int i = 0; i < resultSize; ++i) {
//         printf("%s ", result[i]);
//     }
//     return 0;
// }


#include <stdio.h>
#include <string.h>

#define MAX_SIZE 10

// 检查字符串是否在数组中
int isInArray(char str[], char array[][100], int size) {
    for (int i = 0; i < size; ++i) {
        if (strcmp(str, array[i]) == 0) {
            return 1; // 找到字符串
        }
    }
    return 0; // 未找到字符串
}

int main() {
    char array1[MAX_SIZE][100], array2[MAX_SIZE];
    int size1 = 0, size2 = 0;

    // 输入第一个字符串数组，以'#'结束
    printf("Enter the first set of strings (end with #):\n");
    while (scanf("%s", array1[size1]) == 1 && strcmp(array1[size1], "#") != 0) {
        size1++;
    }

    // 输入第二个字符串数组，以'#'结束
    printf("Enter the second set of strings (end with #):\n");
    while (scanf("%s", array2[size2]) == 1 && strcmp(array2[size2], "#") != 0) {
        size2++;
    }

    int intersectionFound = 0; // 标记是否找到交集

    // 查找并输出交集
    printf("Intersection of the two sets:\n");
    for (int i = 0; i < size1; ++i) {
        if (isInArray(array1[i], array2, size2)) {
            printf("%s\n", array1[i]);
            intersectionFound = 1;
        }
    }

    // 若未找到交集，输出"NULL"
    if (!intersectionFound) {
        printf("NULL\n");
    }

    return 0;
}
