#include<stdio.h>

int main() {
    int n, originalNum, remainder, result;

    printf("Armstrong numbers between 1 and 500 are:\n");

    // Use a single loop to go through numbers from 1 to 500
    for (int i = 1; i <= 500; i++) {
        // Reset variables
        n = i;             // Store the current number in 'n'
        originalNum = n;    // Keep a copy of the original number
        result = 0;         // Reset result for each number

        // Single loop logic to calculate the sum of cubes of digits
        remainder = n % 10;           // Extract last digit
        result += remainder * remainder * remainder;  // Cube the digit and add to result
        n /= 10;                      // Remove last digit

        remainder = n % 10;           // Extract second last digit
        result += remainder * remainder * remainder;  // Cube it and add to result
        n /= 10;                      // Remove second last digit

        remainder = n % 10;           // Extract third last digit
        result += remainder * remainder * remainder;  // Cube it and add to result

        // Check if the sum of cubes of digits is equal to the original number
        if (result == originalNum) {
            printf("%d ", originalNum);  // Print Armstrong number
        }
    }

    printf("\n");
    return 0;
}
