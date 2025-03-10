#include <stdio.h>

// Function to check if a number is prime
int checkPrime(int num) {
    if (num < 2) {
        return 0; // Not a prime number
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // Not a prime number
        }
    }
    return 1; // Prime number
}

int main() {
    int count = 0; // Count of prime numbers found
    int num = 2;   // Starting number to check for primes

    printf("First 50 prime numbers:\n");

    while (count < 50) { // Find the first 50 primes
        if (checkPrime(num)) { // Check if the current number is prime
            printf("%d ", num); // Print the prime number
            count++;            // Increment the count of primes found
        }
        num++; // Move to the next number
    }

    printf("\n"); // Newline after printing all primes
    return 0;
}
