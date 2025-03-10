//4.Write a program in C to display the multiplication table of 1 to n where n is input number.
#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter the number (n) for the multiplication table: ");
    scanf("%d", &n);

    // Outer loop for numbers from 1 to n
    for (i = 1; i <= n; i++) {
        printf("\nMultiplication Table for %d:\n", i);
        printf("---------------------------\n");

        // Inner loop for multiplying i with numbers 1 to 10
        for (j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
    }

    return 0;
}
