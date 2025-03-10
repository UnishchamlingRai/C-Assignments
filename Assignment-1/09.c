//Write a C program to convert a given integer (in days) to years, months and days, assumes that all months have 30 days and all years have 365 days.
#include <stdio.h>

int main() {
    int total_days, years, months, days;

    // Prompt the user to enter the total number of days
    printf("Enter the total number of days: ");
    scanf("%d", &total_days);

    // Calculate the number of years
    years = total_days / 365;

    // Calculate the remaining days after extracting years
    int remaining_days = total_days % 365;

    // Calculate the number of months from the remaining days
    months = remaining_days / 30;

    // Calculate the remaining days after extracting months
    days = remaining_days % 30;

    // Display the results
    printf("%d days are equivalent to %d years, %d months, and %d days.\n",
           total_days, years, months, days);

    return 0;
}
