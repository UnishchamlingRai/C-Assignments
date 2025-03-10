//Write a C program that accepts a distance in centimeters and prints the corresponding value in inches.
#include <stdio.h>

int main() {
    float cm, inches;

    // Prompt the user to enter the distance in centimeters
    printf("Enter the distance in centimeters: ");
    scanf("%f", &cm);

    // Convert centimeters to inches
    inches = cm / 2.54;

    // Display the result
    printf("%.2f centimeters is equal to %.2f inches.\n", cm, inches);

    return 0;
}
