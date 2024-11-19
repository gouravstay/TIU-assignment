// C Program to Count Vowels and Consonants in a String
#include <stdio.h>
#include <ctype.h> // for tolower() function

int main() {
    char str[100]; // Input string
    int vowels = 0, consonants = 0; // Counters for vowels and consonants
    int i;

    // Input the string from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read a string with spaces

    // Iterate through each character in the string
    for (i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]); // Convert character to lowercase for uniformity
        
        // Check if the character is an alphabet
        if (isalpha(ch)) {
            // Check if the character is a vowel
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++; // Increment vowel count
            } else {
                consonants++; // Increment consonant count
            }
        }
    }

    // Display the counts
    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0; // Return success
}
