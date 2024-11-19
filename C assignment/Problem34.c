#include <stdio.h>

int main() {
    int array[5]; // Declare an array of integers
    int *ptr; // Declare a pointer to an integer

    // Input elements into the array
    printf("Enter 5 integers:\n");
    for (int i = 0; i < 5; i++) {
        printf("Element [%d]: ", i);
        scanf("%d", &array[i]); // Read elements into the array
    }

    ptr = array; // Point to the first element of the array

    // Accessing array elements using pointers
    printf("\nArray elements accessed using pointers:\n");
    for (int i = 0; i < 5; i++) {
        printf("Element [%d]: %d\n", i, *(ptr + i)); // Dereference the pointer to get the value
    }

    // Modifying array elements using pointers
    for (int i = 0; i < 5; i++) {
        *(ptr + i) += 1; // Increment each element by 1
    }

    // Display modified array elements
    printf("\nModified array elements:\n");
    for (int i = 0; i < 5; i++) {
        printf("Element [%d]: %d\n", i, *(ptr + i));
    }

    return 0;
}
