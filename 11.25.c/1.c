#include <stdio.h>
#include <math.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num < 2) {
        return 0; // Numbers less than 2 are not prime
    }

    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return 0; // If the number is divisible by any number between 2 and sqrt(num), it's not prime
        }
    }

    return 1; // If no divisor is found, the number is prime
}

// Function to factorize a positive integer into its prime factors
void factorize(int num) {
    printf("Prime factors of %d are: ", num);

    for (int i = 2; i <= num; i++) {
        while (num % i == 0) {
            // i is a prime factor
            printf("%d ", i);

            // Divide num by i to move on to the next prime factor
            num /= i;
        }
    }

    printf("\n");
}

int main() {
    int number;

    // Get a positive integer from the user
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    // Check if the number is prime
    if (isPrime(number)) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    // Factorize the number
    factorize(number);

    return 0;
}
