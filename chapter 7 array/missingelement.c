#include <stdio.h>

int main() {
    int sum1 = 0; // Sum of numbers from 1 to n1
    int sum2 = 0; // Sum of elements in the array
    int n1;

    printf("Enter n1 (the total number of elements including the missing one): ");
    scanf("%d", &n1);

    // Calculate the sum of first n1 natural numbers
    sum1 = n1 * (n1 + 1) / 2;

    int n2 = n1 - 1; // The size of the array will be one less than n1
    int arr[n2];

    printf("Enter the %d elements of the array:\n", n2);
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr[i]);
        sum2 += arr[i]; // Calculate the sum of array elements
    }

    // The missing element is the difference between sum1 and sum2
    int missing = sum1 - sum2;
    printf("The missing element is: %d\n", missing);

    return 0;
}
