#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Dynamic memory allocation for n integers
    int *numbers = (int *)malloc(n * sizeof(int));

    // Check if memory allocation was successful
    if (numbers == NULL) {
        printf("Memory allocation failed!\n");
        return 1; // Exit the program if allocation fails
    }

    // Input the numbers
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    // Initialize the largest number as the first element
    int largest = numbers[0];

    // Find the largest number
    for (int i = 1; i < n; i++) {
        if (numbers[i] > largest) {
            largest = numbers[i];
        }
    }

    // Print the largest number
    printf("The largest number is: %d\n", largest);

    // Free the dynamically allocated memory
    free(numbers);

    return 0;
}
