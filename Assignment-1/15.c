// Write a C program to read the coordinates(x, y) (in Cartesian system) and find the quadrant to which it belongs.

#include <stdio.h>

int main() {
    int x, y;

    // Prompt the user to enter the x and y coordinates
    printf("Enter the x coordinate: ");
    scanf("%d", &x);
    printf("Enter the y coordinate: ");
    scanf("%d", &y);

    // Determine the quadrant based on the signs of x and y
    if (x > 0 && y > 0) {
        printf("The point (%d, %d) lies in Quadrant I.\n", x, y);
    } else if (x < 0 && y > 0) {
        printf("The point (%d, %d) lies in Quadrant II.\n", x, y);
    } else if (x < 0 && y < 0) {
        printf("The point (%d, %d) lies in Quadrant III.\n", x, y);
    } else if (x > 0 && y < 0) {
        printf("The point (%d, %d) lies in Quadrant IV.\n", x, y);
    } else if (x == 0 && y == 0) {
        printf("The point (%d, %d) lies at the origin.\n", x, y);
    } else if (x == 0) {
        printf("The point (%d, %d) lies on the y-axis.\n", x, y);
    } else {
        printf("The point (%d, %d) lies on the x-axis.\n", x, y);
    }

    return 0;
}
