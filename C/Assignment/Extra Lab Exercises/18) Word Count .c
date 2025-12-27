#include <stdio.h>
#include <string.h>

/*LAB EXERCISE 3: Word Count
Que: Write a C program that counts the number of words in a sentence entered by the user.
Challenge: Modify the program to find the longest word in the sentence.*/

int main() 
{
    char sentence[200];
    int i = 0, wordCount = 0, wordLength = 0, maxLength = 0, start = 0, longestStart = 0;

    printf("Enter a sentence: ");
    scanf("%s", sentence);

    while (sentence[i] != '\0') 
    {
        if (sentence[i] != ' ' && sentence[i] != '\n') 
        {
            // start of a word
            if (wordLength == 0) start = i;
            wordLength++;
        } 
        else if (wordLength > 0) 
        {
            wordCount++;
            if (wordLength > maxLength) 
            {
                maxLength = wordLength;
                longestStart = start;
            }
            wordLength = 0;  // reset for next word
        }
        
        i++;
    }

    // check last word if sentence does not end with space
    if (wordLength > 0) 
    {
        wordCount++;
        if (wordLength > maxLength) 
        {
            maxLength = wordLength;
            longestStart = start;
        }
    }

    printf("\nTotal words: %d\n", wordCount);

    // print longest word
    printf("Longest word: ");
    for (i = longestStart; i < longestStart + maxLength; i++) 
    {
        printf("%c", sentence[i]);
    }
    printf("\n");

    return 0;
}
