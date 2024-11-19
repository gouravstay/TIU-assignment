#include <stdio.h>

#define MAX_SIZE 10 // Define maximum size for the matrices

int main() {
    int row, col; // Variables to store the number of rows and columns
    int matrix[MAX_SIZE][MAX_SIZE]; // Original matrix
    int transpose[MAX_SIZE][MAX_SIZE]; // Transpose matrix

    // Get the dimensions of the matrix
    printf("Enter the number of rows and columns (max %d): ", MAX_SIZE);
    scanf("%d %d", &row, &col);

    // Input for the original matrix
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate the transpose of the matrix
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            transpose[j][i] = matrix[i][j]; // Swap rows and columns
        }
    }

    // Display the original matrix
    printf("Original matrix:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Display the transpose matrix
    printf("Transpose matrix:\n");
    for (int i = 0; i < col; i++) {
        for (int j = 0; j < row; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
