#include <stdio.h>

/*AB EXERCISE 1: String Reversal
Que: Write a C program that takes a string as input and reverses it using a function.
Challenge: Write the program without using built-in string handling functions.*/

// Function to reverse a string
void reverseString(char str[]) 
{
    int i, length = 0;
    char temp;

    // Step 1: Find string length manually
    while (str[length] != '\0') {
        length++;
    }

    // Step 2: Reverse the string using swapping
    for (i = 0; i < length / 2; i++) {
        temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

int main() 
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    reverseString(str);  // function call

    printf("Reversed string: %s\n", str);

    return 0;
}
