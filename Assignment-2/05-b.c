/*
Write algorithm and program to compute the followings using for, do while and while loop separately.
a.factorial of an integer N
b.computation of ab( a raised to power b) 
*/

#include <stdio.h>

int main() {
    int a, b, i;
    int result = 1;

    printf("Enter base (a): ");
    scanf("%d", &a);
    printf("Enter exponent (b): ");
    scanf("%d", &b);

    for (i = 1; i <= b; i++) {
        result =result* a;
    }

    printf("%d raised to the power %d is: %d\n", a, b, result);
    return 0;
}
