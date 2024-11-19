#include <stdio.h>

#define MAX_SIZE 10 // Define maximum size for the matrices

// Function to multiply two matrices
void multiplyMatrices(int first[MAX_SIZE][MAX_SIZE], int second[MAX_SIZE][MAX_SIZE], 
                      int result[MAX_SIZE][MAX_SIZE], int rowFirst, int colFirst, int colSecond) {
    for (int i = 0; i < rowFirst; i++) {
        for (int j = 0; j < colSecond; j++) {
            result[i][j] = 0; // Initialize the result element
            for (int k = 0; k < colFirst; k++) {
                result[i][j] += first[i][k] * second[k][j]; // Multiply and sum
            }
        }
    }
}

// Function to print a matrix
void printMatrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rowFirst, colFirst, rowSecond, colSecond; // Dimensions of the matrices
    int first[MAX_SIZE][MAX_SIZE]; // First matrix
    int second[MAX_SIZE][MAX_SIZE]; // Second matrix
    int result[MAX_SIZE][MAX_SIZE]; // Resultant matrix for the product

    // Get the dimensions of the first matrix
    printf("Enter rows and columns for first matrix: ");
    scanf("%d %d", &rowFirst, &colFirst);

    // Get the dimensions of the second matrix
    printf("Enter rows and columns for second matrix: ");
    scanf("%d %d", &rowSecond, &colSecond);

    // Check if multiplication is possible
    if (colFirst != rowSecond) {
        printf("Matrix multiplication not possible. Number of columns in first matrix must equal number of rows in second matrix.\n");
        return 1; // Exit if multiplication is not possible
    }

    // Input for the first matrix
    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < rowFirst; i++) {
        for (int j = 0; j < colFirst; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &first[i][j]);
        }
    }

    // Input for the second matrix
    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < rowSecond; i++) {
        for (int j = 0; j < colSecond; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &second[i][j]);
        }
    }

    // Call the function to multiply the matrices
    multiplyMatrices(first, second, result, rowFirst, colFirst, colSecond);

    // Display the result
    printf("Resultant matrix after multiplication:\n");
    printMatrix(result, rowFirst, colSecond);

    return 0;
}
