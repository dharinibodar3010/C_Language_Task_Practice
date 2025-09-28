#include<stdio.h>

//Que:Write a C program to check if a number is even or odd using an if-else
statement. Extend the program using a switch statement to display the month
name based on the user’s input (1 for January, 2 for February, etc.).

int main()
{
    int num, month;
    
    //Part: 1 check even or odd number
    printf("\n------Check Even or Odd------\n");
    printf("Enter Any Number: ");
    scanf("%d", &num);
    
    if(num % 2 == 0)
    {
        printf("\n%d is Even", num);
    }
    else
    {
        printf("\n%d is Odd\n", num);
    }

    //Part:2 Display month name using switch
    printf("\n------Display Month------\n");
    printf("Enter Month Number: ");
    scanf("%d", &month);
    
    switch(month)
    {
        case 1:
        printf("\nJanuary");
        break;
        
        case 2:
        printf("\nFebruary");
        break;
        
        case 3:
        printf("\nMarch");
        break;
        
        case 4:
        printf("\nApril");
        break;
        
        case 5:
        printf("\nMay");
        break;
        
        case 6:
        printf("\nJune");
        break;
        
        case 7:
        printf("\nJuly");
        break;
        
        case 8:
        printf("\nAugust");
        break;
        
        case 9:
        printf("\nSeptember");
        break;
        
        case 10:
        printf("\nOctober");
        break;
        
        case 11:
        printf("\nNovember");
        break;
        
        case 12:
        printf("\nDecember");
        break;
        
        default:
        printf("\nInvalid month number! Please enter (1-12)");
    }
    
    return 0;
}
