#include<stdio.h>

/* LAB EXERCISE 1: Fibonacci Sequence
Que: Write a C program that generates the Fibonacci sequence up to N terms using a recursive
function.
Challenge: Modify the program to calculate the Nth Fibonacci number using both iterative
and recursive methods. Compare their efficiency.*/

// Recursive method (less efficient)
int fibonacci_recursive(int n)
{
    if(n == 0) // base case
    return 0;
    
    else if (n == 1) // base case
    return 1;

    else 
    return fibonacci_recursive(n-1) + fibonacci_recursive(n-2);
}

// Iterative method (efficient)
int fibonacci_iterative(int n)
{
    int a = 0, b = 1, c, i;
    
    if(n == 0) return 0;
    if(n == 1) return 1;
    for(i=2; i<=n; i++)
    {
        c = a + b;
        a = b; 
        b = c;
    }
    
    return b;
}

int main ()
{
    int n, i;
    
    printf("Enter Numbers of Terms: ");
    scanf("%d", &n);
    
    printf("Fibonacci sequence up to %d terms: \n", n);
    for(i=0; i<n; i++)
    {
        printf("%d ", fibonacci_recursive(i));
        //printf("%d ", fibonacci_iterative(i));
    }
    
    printf("\n");
    
    printf("Nth Fibonacci using recursion: %d \n", fibonacci_recursive(n));
    printf("Nth Fibonacci using iteration: %d \n", fibonacci_iterative(n));
    
    printf("\n-----Efficiency Note-----\n");
    printf("1) Recursive method is slower because it recalculates values many times.\n2) Iterative method is faster and uses less memory.\n");
    
    return 0;
}
