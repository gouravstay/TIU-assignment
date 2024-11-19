#include <stdio.h>

int main() {
    int n; // Number of elements
    int largest; // Variable to store the largest element

    // Get the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Declare an array to hold the elements
    int arr[n];

    // Get user input for the array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]); // Read each element into the array
    }

    // Initialize largest to the first element of the array
    largest = arr[0];

    // Iterate through the array to find the largest element
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i]; // Update largest if a larger element is found
        }
    }

    // Display the largest element
    printf("The largest element is: %d\n", largest);

    return 0;
}
