#include<stdio.h>
#include<string.h>

//Que:Write a C program that takes two strings from the user and concatenates them
using strcat(). Display the concatenated string and its length using
strlen().

int main()
{
    char str1[100], str2[100];
    
    printf("Enter first string: ");
    scanf("%s", str1);
    
    printf("Enter second string: ");
    scanf("%s", str2);
    
    strcat(str1, str2);
    
    printf("\nConcatenated string: %s",str1);
    
    printf("\nLength of concatenated string: %ld", strlen(str1));
    
    return 0;
}
