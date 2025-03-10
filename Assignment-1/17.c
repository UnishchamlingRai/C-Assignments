//Write a C program to print a number, its square and cube in a line, starting from 1 and print n lines. Accept number of lines (n, integer) from the user.
#include <stdio.h>

int main() {
    int n, i;

    // Prompt the user to enter the number of lines
    printf("Enter the number of lines: ");
    scanf("%d", &n);

    // Loop through numbers from 1 to n
    for (i = 1; i <= n; i++) {
        // Print the number, its square, and its cube
        printf("%d %d %d\n", i, i * i, i * i * i);
    }

    return 0;
}
