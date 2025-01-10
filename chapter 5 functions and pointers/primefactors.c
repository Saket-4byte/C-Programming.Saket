#include <stdio.h>

void printPrimeFactors(int n) {
    // Print the number of 2s that divide n
    while (n % 2 == 0) {
        printf("%d ", 2);
        n /= 2;
    }

    // n must be odd at this point, so we can skip even numbers
    for (int i = 3; i * i <= n; i += 2) {
        // While i divides n, print i and divide n
        while (n % i == 0) {
            printf("%d ", i);
            n /= i;
        }
    }

    // This condition is for n being a prime number greater than 2
    if (n > 2) {
        printf("%d ", n);
    }
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Prime factors of %d are: ", number);
    printPrimeFactors(number);
    return 0;
}
