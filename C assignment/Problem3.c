#include <stdio.h>

// Function to calculate GCD using Euclidean algorithm
int findGCD(int a, int b) {
    if (b == 0)
        return a;
    return findGCD(b, a % b);  // Recursive call
}

int main() {
    int num1, num2, gcd;

    // Input two numbers from the user
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Call the function to find GCD
    gcd = findGCD(num1, num2);

    // Display the result
    printf("GCD of %d and %d is %d\n", num1, num2, gcd);

    return 0;
}
