#include <stdio.h>
int main() {
    int arr[] = {2, 5, 6, 7, 2, 9, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 2;
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            count++;
        }
    }
    printf("phan tu %d xuat hien %d lan trong mang",x , count);
    //phụ thuộc số lượng phần từ n của mảng nên duyet for n lần , độ phức tạp O(n)
    return 0;
}