#include <stdio.h>

int main() {
    int n; // Number of elements
    double sum = 0.0; // Variable to store the sum
    double average; // Variable to store the average

    // Get the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Declare an array to hold the elements
    double arr[n];

    // Get user input for the array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%lf", &arr[i]); // Use %lf for double values
        sum += arr[i]; // Accumulate the sum
    }

    // Calculate the average
    average = sum / n;

    // Display the result
    printf("The average is: %.2f\n", average);

    return 0;
}
