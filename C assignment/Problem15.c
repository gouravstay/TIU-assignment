#include <stdio.h>

int main() {
    int height, i, j;

    // Input the height of the pyramid
    printf("Enter the height of the pyramid: ");
    scanf("%d", &height);

    // Loop through each row
    for (i = 1; i <= height; i++) {
        // Print spaces
        for (j = i; j < height; j++) {
            printf(" "); // Print space for alignment
        }

        // Print stars
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*"); // Print star
        }

        printf("\n"); // Move to the next line after each row
    }

    return 0; // Return success
}
