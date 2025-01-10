#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];

    // Input elements
    for (int i = 0; i < n; i++) {
        printf("Enter element number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int palindrome = 1; // Assume the array is a palindrome

    // Check if the array is a palindrome
    for (int i = 0; i < n / 2; i++) {
        if (arr[i] != arr[n - 1 - i]) {
            palindrome = 0;
            break;
        }
    }

    if (palindrome == 1) {
        printf("It is a palindrome\n");
    } else {
        printf("It is not a palindrome\n");
    }

    return 0;
}
