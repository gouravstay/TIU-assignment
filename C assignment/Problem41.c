#include <stdio.h>

int main() {
    int n;

    // Input the number of terms
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    // Print the series
    for (int i = 1; i <= n; i++) {
        // Print the first digit '3'
        printf("3");

        // Print (i-1) number of '4's
        for (int j = 1; j < i; j++) {
            printf("4");
        }

        // Print a comma after each term except the last one
        if (i < n) {
            printf(", ");
        }
    }
    
    printf("\n"); // New line after the series
    return 0;
}

