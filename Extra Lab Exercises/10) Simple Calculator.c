#include<stdio.h>

/*LAB EXERCISE 1: Simple Calculator
Que: Write a C program that acts as a simple calculator. The program should take two numbers
and an operator as input from the user and perform the respective operation (addition,
subtraction, multiplication, division, or modulus) using operators.
Challenge: Extend the program to handle invalid operator inputs.*/

int main()
{
    int number1, number2, result;
    char op;
    
    printf("Enter First Number: ");
    scanf("%d", &number1);
    
    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &op);
    
    printf("Enter Second Number: ");
    scanf("%d", &number2);
    
    switch(op)
    {
        case '+':
        result = number1 + number2;
        printf("Result: %d\n", result);
        break;
        
        case '-':
        result = number1 - number2;
        printf("Result: %d\n", result);
        break;
        
        case '*':
        result = number1 * number2;
        printf("Result: %d\n", result);
        break;
        
        case '/':
        if(number2 != 0)
        {
            result = number1 / number2;
            printf("Result: %d\n", result);
        }
        else
        {
            printf("Division by zero not allowed.\n");
        }
        break;
        
        case '%':
        
        if(number2 != 0)
        {
            result = number1 / number2;
            printf("Result: %d\n", result);
        }
        else
        {
            printf("Division by zero in modulus is not allowed.\n");
        }
        break;
        
        default: 
        {
            printf("Error: Invalid operator '%c'.\n", op);
        }
        
        return 0;
    }
}
