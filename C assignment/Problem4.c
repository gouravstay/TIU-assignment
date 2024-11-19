#include <stdio.h>

// Function to calculate GCD using Euclidean algorithm
int findGCD(int a, int b) {
    if (b == 0)
        return a;
    return findGCD(b, a % b);  // Recursive call
}

// Function to calculate LCM
int findLCM(int a, int b) {
    int gcd = findGCD(a, b);
    return (a * b) / gcd;  // LCM formula: (a * b) / GCD
}

int main() {
    int num1, num2, lcm;

    // Input two numbers from the user
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Call the function to find LCM
    lcm = findLCM(num1, num2);

    // Display the result
    printf("LCM of %d and %d is %d\n", num1, num2, lcm);

    return 0;
}
