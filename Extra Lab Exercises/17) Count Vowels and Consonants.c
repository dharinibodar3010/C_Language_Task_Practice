#include <stdio.h>
#include <string.h>

/*LAB EXERCISE 2: Count Vowels and Consonants
Que: Write a C program that takes a string from the user and counts the number of vowels and
consonants in the string.
Challenge: Extend the program to also count digits and special characters.*/

int main() {
    char str[100];
    int i = 0;
    int vowels = 0, consonants = 0, digits = 0, special = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    while (str[i] != '\0') 
    {
        char ch = str[i];

        // Check for vowels
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') 
            {
                vowels++;
            }
        // Check for consonants
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) 
            {
                consonants++;
            }
        // Check for digits
        else if (ch >= '0' && ch <= '9') 
            {
                digits++;
            }
        // Special characters
        else 
            {
                special++;
            }

        i++;
    }

    printf("\nVowels: %d", vowels);
    printf("\nConsonants: %d", consonants);
    printf("\nDigits: %d", digits);
    printf("\nSpecial characters: %d\n", special);

    return 0;
}