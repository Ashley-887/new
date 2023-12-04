#include <stdio.h>
void sortArray(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int findMedian(int arr[], int n) {
    sortArray(arr, n);
    int mid = n / 2;
    if (n % 2 != 0) {
        return arr[mid];
    }
    else {
        return (arr[mid - 1] + arr[mid]) / 2;
    }
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
    if (count > 0) {
        int median = findMedian(arr, count);
        printf("%d\n", median);
    } else {
        printf("No valid input provided.\n");
    }

    return 0;
}
