#include <stdio.h>
int main() {
    int n;
    printf("nhap n:");
    scanf("%d", &n);


    //cách 1 dùng for, phụ thuộc số lần lặp n nên độ phức tạp: O(n)
    int sum1 = 0;
    for (int i = 1; i<= n; i++) {
        sum1 += i;
    }

    //cách 2 dùng công thức toán học sẽ tính ra được luôn kết quả độ phức tạp O(1)
    int sum2 = n * (n + 1) / 2;

    printf("%d\n", sum1);
    printf("%d", sum2);

}
