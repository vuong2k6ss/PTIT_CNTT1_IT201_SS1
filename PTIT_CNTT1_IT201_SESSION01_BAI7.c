#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h> // cần thiết để dùng kiểu bool trong C

int main() {
    int arr[] = {2, 5, 6, 7, 2, 9, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    // ==== CÁCH 1: So sánh từng cặp phần tử ==== O(n^2)
    bool trung1 = false;
    for (int i = 0; i < n - 1 && !trung1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                trung1 = true;
                break;
            }
        }
    }

    // ==== CÁCH 2: Dùng mảng đánh dấu số đã gặp ==== O(n)
    bool danh_dau[1001] = {false}; // Vì phần tử nằm trong 0–1000
    bool trung2 = false;
    for (int i = 0; i < n; i++) {
        if (danh_dau[arr[i]]) {
            trung2 = true;
            break;
        }
        danh_dau[arr[i]] = true;
    }

    // ==== In kết quả ====
    printf("Cach 1: %s\n", trung1 ? "Co trung" : "Khong trung");
    printf("Cach 2: %s\n", trung2 ? "Co trung" : "Khong trung");

    return 0;
}
