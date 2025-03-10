//Write a C program to convert a given integer (in seconds) to hours, minutes and seconds.
#include <stdio.h>

int main() {
    int total_seconds, hours, minutes, seconds;

    // Prompt the user to enter the total number of seconds
    printf("Enter the total number of seconds: ");
    scanf("%d", &total_seconds);

    // Calculate hours
    hours = total_seconds / 3600;

    // Calculate remaining seconds after extracting hours
    int remaining_seconds = total_seconds % 3600;

    // Calculate minutes
    minutes = remaining_seconds / 60;

    // Calculate remaining seconds after extracting minutes
    seconds = remaining_seconds % 60;

    // Display the results
    printf("%d seconds is equivalent to %d hours, %d minutes, and %d seconds.\n",
           total_seconds, hours, minutes, seconds);

    return 0;
}
