#include<stdio.h>

/*LAB EXERCISE 2: Factorial Calculation
Que: Write a C program that calculates the factorial of a given number using a function.
Challenge: Implement both an iterative and a recursive version of the factorial function and
compare their performance for large numbers.*/

// Recursion method
int factorial_recursive(int n)
{
    if(n == 0 || n == 1)
        return 1;
    else 
        return n*factorial_recursive(n-1);
}

// Iterative method
int factorial_iterative(int n)
{
    int fact = 1, i;
    for(i=1; i<=n; i++)
    {
        fact *= i;
    }

    return fact;
}


int main()
{
    int n;
    
    printf("Enter a Number: ");
    scanf("%d", &n);
    
    if(n < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
        return 0;
    }
    
    printf("Factorial of %d using recursion: %d \n", n, factorial_recursive(n));
    printf("Factorial of %d using iteration: %d \n", n, factorial_iterative(n));
    
    printf("\n-----Efficiency Note-----\n");
    printf("Recursive method is slower than Iterative method and uses less memory.\n");
    
    return 0;
}
