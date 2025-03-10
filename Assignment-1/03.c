//Write a C program to compute the perimeter and area of a circle with a radius of 6 inches.
#include <stdio.h>
#define PI 3.14159265358979323846  // Define the value of pi

int main() {
    double radius = 6.0;
    double circumference = 2 * PI * radius;
    double area = PI * radius * radius;

    printf("Circumference of the circle = %.2f inches\n", circumference);
    printf("Area of the circle = %.2f square inches\n", area);

    return 0;
}
