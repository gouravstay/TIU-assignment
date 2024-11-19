#include <stdio.h>

// Function to calculate the sum of squares recursively
double sumOfSquares(int arr[], int n) {
    // Base case: If no elements are left
    if (n <= 0) {
        return 0;
    }
    // Recursive case: Add the square of the current element to the sum of squares of the remaining elements
    return (arr[n - 1] * arr[n - 1]) + sumOfSquares(arr, n - 1);
}

// Function to calculate the average power
double averagePower(int arr[], int n) {
    if (n <= 0) {
        return 0; // Handle case where no elements are present
    }
    double totalPower = sumOfSquares(arr, n);
    return totalPower / n; // Calculate average power
}

int main() {
    int n;

    // Get the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Get user input for the array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Calculate and display the average power
    double avgPower = averagePower(arr, n);
    printf("The average power is: %.2f\n", avgPower);

    return 0;
}
