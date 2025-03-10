#include <stdio.h>
#include <stdlib.h>

// Function to calculate the sum of the array
int calculateSum(int *arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int n, *arr;

    
    printf("Enter the number of elements: ");
    scanf("%d", &n);

   
    arr = (int *)malloc(n * sizeof(int));

    
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }


    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculating and printing the sum
    int sum = calculateSum(arr, n);
    printf("Sum of the array: %d\n", sum);

    // Freeing dynamically allocated memory
    free(arr);

    return 0;
}
