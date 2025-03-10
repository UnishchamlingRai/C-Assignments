
//Write a C program to convert specified days into years, month, weeks and days. (Note: Ignore leap year.)
#include <stdio.h>

int main() {
    int total_days, years, weeks, days;

    // Prompt the user to enter the total number of days
    printf("Enter the total number of days: ");
    scanf("%d", &total_days);

    // Calculate the number of years
    years = total_days / 365;

    // Calculate the remaining days after extracting years
    int remaining_days = total_days % 365;

    // Calculate the number of weeks from the remaining days
    weeks = remaining_days / 7;

    // Calculate the remaining days after extracting weeks
    days = remaining_days % 7;

    // Display the results
    printf("%d days are equivalent to %d years, %d weeks, and %d days.\n", total_days, years, weeks, days);

    return 0;
}
