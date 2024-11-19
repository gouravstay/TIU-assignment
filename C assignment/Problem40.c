#include <stdio.h>

#define MAX_SIZE 100 // Maximum size for the square matrix

int main() {
    int n, matrix[MAX_SIZE][MAX_SIZE];
    int primaryDiagonalSum = 0, secondaryDiagonalSum = 0;

    // Input the size of the matrix
    printf("Enter the size of the square matrix (n x n): ");
    scanf("%d", &n);

    // Input the matrix elements
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate the sums of the diagonals
    for (int i = 0; i < n; i++) {
        primaryDiagonalSum += matrix[i][i];            // Main diagonal
        secondaryDiagonalSum += matrix[i][n - 1 - i]; // Secondary diagonal
    }

    // Display the results
    printf("Sum of the primary diagonal: %d\n", primaryDiagonalSum);
    printf("Sum of the secondary diagonal: %d\n", secondaryDiagonalSum);

    return 0;
}
