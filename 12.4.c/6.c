#include <stdio.h>
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n = 5;
    int scores[5];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &scores[i]);
    }
    bubbleSort(scores, n);
    for (int i = 0; i < n; ++i) {
        printf("%d\n", scores[i]);
    }
    return 0;
}
