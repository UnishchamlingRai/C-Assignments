//Write a C program to calculate the distance between the two points (Cartesian).
#include <stdio.h>
#include <math.h>

int main() {
    float x1, y1, x2, y2, distance;

    // Prompt the user to enter the coordinates of the first point
    printf("Enter the coordinates of the first point (x1 y1): ");
    scanf("%f %f", &x1, &y1);

    // Prompt the user to enter the coordinates of the second point
    printf("Enter the coordinates of the second point (x2 y2): ");
    scanf("%f %f", &x2, &y2);

    // Calculate the distance using the Euclidean formula
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Display the result
    printf("The distance between the points is: %.2f\n", distance);

    return 0;
}
