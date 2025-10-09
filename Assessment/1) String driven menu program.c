#include<stdio.h>
#include<string.h>
#include<ctype.h> // for isalpha(), isdigits()

// Function declarations
void reverseString(char str[]);
void concatenateString(char str[]);
void checkPalidrome(char str[]);
void copyString(char str[]);
void findLength(char str[]);
void frequencyOfCharacter(char str[]);
void countVowelsConsonants(char str[]);
void countSpacesDigits(char str[]);
void showMenu();

int main()
{
    char str[200];
    int choice;
    char c;
    
    printf("\n-------STRING OPERATIONS APPLICATION-------\n");
    
    printf("Enter a String:  ");
    fgets(str, sizeof(str), stdin);
    
    do 
    {
        showMenu();
        printf("Enter your choice (1-8): ");
        scanf("%d", &choice);
        
        switch(choice)
        {
            case 1: reverseString(str);
            break;
            
            case 2: concatenateString(str);
            break;
            
            case 3: checkPalidrome(str);
            break;
            
            case 4: copyString(str);
            break;
            
            case 5: findLength(str);
            break;
            
            case 6: frequencyOfCharacter(str);
            break;
            
            case 7: countVowelsConsonants(str);
            break;
            
            case 8: countSpacesDigits(str);
            break;
            
            default:
            printf("\nInvalid choice! Please enter a number between 1 to 8.\n");
        }
        
        printf("\nDo you want to perform another operation? (y/n): ");
        scanf(" %c", &c);
    }
    while(c == 'y' || c == 'Y');
    
    printf("\nThank you for using the String Operations Application!\n");
    
    return 0;
}
    
    // Display string operations Function
    void showMenu()
    {
        printf("\n===============MENU================\n");
        printf("1. Reverse the string\n");
        printf("2. Concatenate another string\n");
        printf("3. Check if string is palidrome\n");
        printf("4. Copy string to another variable\n");
        printf("5. Find length of the string\n");
        printf("6. Find frequency of character\n");
        printf("7. Count vowels and consonants\n");
        printf("8. Count blank spaces and digits\n");
        
        printf("======================================\n");
    }
    
    // function : reverseString
    void reverseString(char str[])
    {
        int len = strlen(str);
        printf("Reversed String: \n");
        for(int i=len-1; i>=0; i--)
        {
            printf("%c", str[i]);
        }
    }
    
    // function : concatenateString
    void concatenateString(char str[])
    {
        char str2[200];
        printf("Enter another string to Concatenate: \n");
        scanf("%s", str2);
        strcat(str, str2);
        printf("Concatenate String: %s", str);
    }
    
    // function : checkPalidrome
   void checkPalidrome(char str[])
{
    char cleanStr[200], rev[200];
    int i, j = 0;
    
    str[strcspn(str, "\n")] = '\0';

    for(i = 0; str[i] != '\0'; i++)
    {
        if(isalpha(str[i]) || isdigit(str[i]))  
        {
            cleanStr[j++] = tolower(str[i]);
        }
    }
    cleanStr[j] = '\0';
    
    int len = strlen(cleanStr);
    for(i = 0; i < len; i++)
    {
        rev[i] = cleanStr[len - i - 1];
    }
    rev[len] = '\0';
    
    if(strcmp(cleanStr, rev) == 0)
    {
        printf("The string is a palindrome.\n");
    }
    else
    {
        printf("The string is NOT a palindrome.\n");
    }
}

    // function : copyString
    void copyString(char str[])
    {
        char str2[200];
        strcpy(str2, str);
        printf("Copied String: %s\n", str2);
    }
    
    // function : findLength
    void findLength(char str[])
    {
        printf("Length of the string: %ld", strlen(str));
    }
    
    // function : frequencyOfCharacter
    void frequencyOfCharacter(char str[])
    {
        char ch;
        int i;
        int count = 0;
        
        printf("Enter a character to find frequency: ");
        scanf(" %c", &ch); //leave space before %c because enter character
        
        // Loop through string
        for(i = 0; str[i] != '\0'; i++) 
        {
            if(str[i] == ch) 
            {
                count++;
            }
        }
      printf("\nFrequency of '%c' = %d", ch, count);
    }
    
    // function : countVowelsConsonants
    void countVowelsConsonants(char str[])
    {
        int i, vowels = 0,consonants = 0;
        for(i=0; str[i] != '\0'; i++)
        {
            char ch = tolower(str[i]);
            if(isalpha(ch))
            {
                if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                {
                    vowels++;
                }
                else
                {
                    consonants++;
                }
            }
        }
        printf("Vowels: %d\n", vowels);
        printf("Consonants: %d\n", consonants);
    }
    
    // function : countSpacesDigits
    void countSpacesDigits(char str[])
    {
        int i, spaces = 0, digits = 0;
        
        for(i=0; str[i] != '\0'; i++)
        {
            if(str[i] == ' ')
                spaces++;
            else if(isdigit(str[i]))
                digits++;
        }
        
        printf("Blank spaces: %d\n", spaces);
        printf("Digits: %d\n", digits);
    }
    
    
