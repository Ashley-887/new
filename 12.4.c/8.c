#include <stdio.h>
// 函数用于交换两个整数的值
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int arr[10];
    int input, count = 0;
    do {
        scanf("%d", &input);
        if (input != -1) {
            arr[count] = input;
            count++;
        }
    } while (input != -1 && count < 10);
    // 找出最大值和最小值的位置
    int maxIndex = 0, minIndex = 0;
    for (int i = 1; i <count ; ++i) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }

    // 交换最大值和最小值的位置
    swap(&arr[maxIndex], &arr[minIndex]);
    for (int i = 0; i <count; ++i) {
        printf("%d ", arr[i]);
    }
    return 0;
}
