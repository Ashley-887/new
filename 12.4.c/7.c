#include <stdio.h>

// 二分查找函数，返回查找到的位置（从1开始计数），如果没有找到返回-1
int binarySearch(int arr[], int n, int target) {
    int low = 0;
    int high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == target) {
            return mid + 1; // 返回位置（从1开始计数）
        } else if (arr[mid] > target) {
            low = mid + 1; // 在右半部分继续查找
        } else {
            high = mid - 1; // 在左半部分继续查找
        }
    }

    return -1; // 没有找到
}

int main() {
    int n = 5;
    int scores[5];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &scores[i]);
    }

    // 输入要查找的成绩
    int target;
    scanf("%d", &target);

    // 使用二分查找查找成绩
    int position = binarySearch(scores, n, target);

    // 输出结果
    if (position != -1) {
        printf("%d %d\n", target, position);
    } else {
        printf("-1");
    }

    return 0;
}
