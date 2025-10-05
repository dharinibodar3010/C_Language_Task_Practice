#include<stdio.h>

/*LAB EXERCISE 2: Check Number Properties
Que: Write a C program that takes an integer from the user and checks the following using
different operators:
o Whether the number is even or odd.
o Whether the number is positive, negative, orzero.
o Whether the number is a multiple of both 3 and 5.*/
    
int main ()
{
    int num;
    
    printf("Enter Any Number: ");
    scanf("%d", &num);
    
    //whether the number is even or odd
    if(num % 2 == 0)
    {
        printf("\n the number is even: %d", num);
    }
    else
    {
        printf("\n the number is odd: %d", num);
    }
    
    //whether the number is positive, negatives or zero
    if(num > 0)
    {
        printf("\n the number is positive: %d", num);
    }
    else if(num < 0)
    {
        printf("\n the number is negative: %d", num);
    }
    else
    {
        printf("\n the number is zero");
    }
    
    //whether the number is multiple of both 3 and 5
    if(num % 3 == 0 && num % 5 == 0)
    {
        printf("\n the number is multiple of both 3 and 5: %d", num);
    }
    else 
    {
        printf("\n the number is not multiple of both 3 and 5: %d", num);
    }
    return 0;
}
