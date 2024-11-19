#include <stdio.h>
#include <string.h>

#define MAX_CHAR 256 // Maximum characters (ASCII)

int main() {
    char str[100]; // Input string
    int freq[MAX_CHAR] = {0}; // Frequency array initialized to 0
    int i;

    // Input the string from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read a string with spaces

    // Remove the newline character if present
    str[strcspn(str, "\n")] = 0;

    // Calculate frequency of each character
    for (i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++; // Increment the frequency of the character
    }

    // Display the frequency of characters
    printf("Character frequency:\n");
    for (i = 0; i < MAX_CHAR; i++) {
        if (freq[i] > 0) { // Print only characters that appear in the string
            printf("'%c' : %d\n", i, freq[i]);
        }
    }

    return 0; // Return success
}
