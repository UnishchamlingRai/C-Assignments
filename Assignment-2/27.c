/*
27.	Write a program that illustrates the similarity between array and pointer.
*/
#include <stdio.h>

int main() {
    // Declare an array
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr; // Pointer pointing to the first element of the array

    printf("Using array indexing:\n");
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    printf("\nUsing pointer arithmetic:\n");
    for (int i = 0; i < 5; i++) {
        printf("*(ptr + %d) = %d\n", i, *(ptr + i)); // Accessing using pointer arithmetic
    }

    printf("\nAddress comparison print address using arr and pointer method:\n");
    for (int i = 0; i < 5; i++) {
        printf("&arr[%d] = %p, (ptr + %d) = %p\n", i, &arr[i], i, (ptr + i));
    }

    return 0;
}
