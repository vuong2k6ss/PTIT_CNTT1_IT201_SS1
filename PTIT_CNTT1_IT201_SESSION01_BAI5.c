#include <stdio.h>
int main() {
    int arr[] = { 5, 3, 7, 8, 4, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;

            }
        }
    }
    printf("mang sau khi sap xep:");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
    //dung 2 vong for nên độ phức tạp O(n^2), mảng sau khi sắp xếp : 1, 3, 4, 5, 7, 8
}
