#include<stdio.h>

//Que:Write a C program that calculates the factorial of a number using a function.
Include function declaration, definition, and call.

//Function Declaration
int factorial(int n);

int main()
{
    int num, result;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    
    //Function Call
    result = factorial(num);
    printf("\nFactorial of %d = %d", num, result);

    return 0;
}

//Function Definition
int factorial(int n)
{
    int fact = 1;
    for(int i=1; i<=n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
