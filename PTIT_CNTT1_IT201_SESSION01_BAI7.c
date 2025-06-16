#include <stdio.h>
#include <stdlib.h>
int main() {
    int arr[] = {2, 5, 6, 7, 2, 9, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    //cách 1:
    bool dup1 = false;
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (arr[i] = arr[j]) {
                dup1 = true;
            }
        }
    }


    //cách 2:


    return 0;
}