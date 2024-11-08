#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    int swapped;  // ノㄓ浪琩セ近琌秈︽筁ユ传

    for (i = 0; i < n - 1; i++) {
        swapped = 0;  // 安砞セ近⊿Τユ传

        // –近筂菌絛瞅罽
        for (j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                // ユ传綟じ
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;  // Τユ传砞竚 swapped  1
            }
        }

        // 狦セ近⊿Τ秈︽ユ传玥矗玡沧ゎ逼
        if (swapped == 0) {
            break;
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("﹍计: \n");
    printArray(arr, n);

    bubbleSort(arr, n);

    printf("逼计: \n");
    printArray(arr, n);

    return 0;
}
