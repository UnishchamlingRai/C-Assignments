//Write a C program to print all numbers between 1 to 100 which divided by a specified number and the remainder will be 3.
#include <stdio.h>

int main() {
    int divisor, i;

    // Prompt the user to enter the divisor
    printf("Enter an integer divisor: ");
    scanf("%d", &divisor);

    // Check if the divisor is greater than 3 to ensure valid results
    if (divisor <= 3) {
        printf("Please enter a divisor greater than 3.\n");
        return 1; // Exit the program with an error code
    }

    // Inform the user about the operation
    printf("Numbers between 1 and 100 that leave a remainder of 3 when divided by %d:\n", divisor);

    // Loop through numbers from 1 to 100
    for (i = 1; i <= 100; i++) {
        // Check if the remainder is 3 when i is divided by divisor
        if (i % divisor == 3) {
            printf("%d\n", i);
        }
    }

    return 0;
}
