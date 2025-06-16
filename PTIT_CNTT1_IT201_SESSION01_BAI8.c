#include <stdio.h>
int main() {
    int arr[] = {2, 4, 6, 8, 1, 2, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int maxCount = 0;
    int phanTuNhieuNhat = arr[0];

    //duyet từng phâần tửu trong mảng
    for (int i = 0; i < n; i++) {
        int count = 1;

        for (int j = i+1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        if (count > maxCount) {
        maxCount = count;
        phanTuNhieuNhat = arr[i];
        }

    }
    printf("phan tu xuat hien nhieu nhat la: %d\n",phanTuNhieuNhat );
    //hai vòng for nên độ phức tạp l O(n^2)
    return 0;
}