//Write a C program that accepts some integers from the user and find the highest value and the input position
#include <stdio.h>
#include <stdio.h>

int main() {
    int n, i, number, max, position;

    // Prompt the user to enter the number of integers
    printf("Enter the number of integers: ");
    scanf("%d", &n);

    // Check if the number of integers is positive
    if (n <= 0) {
        printf("Please enter a positive number of integers.\n");
        return 1; // Exit the program with an error code
    }

    // Initialize max to a very small value
    max = -2147483648; // Minimum value for a 32-bit signed integer
    position = -1;

    // Loop to read integers and find the maximum
    for (i = 1; i <= n; i++) {
        printf("Enter integer #%d: ", i);
        scanf("%d", &number);

        // Update max and position if the current number is greater than max
        if (number > max) {
            max = number;
            position = i;
        }
    }

    // Display the highest value and its position
    printf("Highest value: %d\n", max);
    printf("Position: %d\n", position);

    return 0;
}
