#include <stdio.h>
int main() {
    int n = 12;  
    int arr[] = {10, 4, 5, 8, 9, 4, 5, 1, 6, 7, 8, 0};  // 12 elements
    int small = arr[0];

    for (int i = 1; i < n; i++) {  
        if (arr[i] < small) {
            small = arr[i];
        }
    }

    printf("The smallest number is: %d", small);

    return 0;
}
