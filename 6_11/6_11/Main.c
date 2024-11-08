#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    int swapped;  // �Ψ��ˬd�����O�_�i��L�洫

    for (i = 0; i < n - 1; i++) {
        swapped = 0;  // ���]�����S���洫

        // �C���M�����d���Y�p
        for (j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                // �洫�۾F������
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;  // ���洫�A�]�m swapped �� 1
            }
        }

        // �p�G�����S���i��洫�A�h���e�פ�Ƨ�
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

    printf("��l�ƦC: \n");
    printArray(arr, n);

    bubbleSort(arr, n);

    printf("�Ƨǫ�ƦC: \n");
    printArray(arr, n);

    return 0;
}
