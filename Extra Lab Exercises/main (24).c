#include<stdio.h>

/*LAB EXERCISE 1: Prime Number Check
Que: Write a C program that checks whether a given number is a prime number or not using a for
loop.
Challenge: Modify the program to print all prime numbers between 1 and a given number.*/

//Part 2 (Challenge): Print all prime number between 1 and N 

int main()
{
    int i, j, n, isPrime;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    printf("Prime number between 1 and %d are:\n", n);
    
    for(i=2; i<=n; i++)
    {
        isPrime = 1; //assume i is prime
        for(j=2; j<=i/2; j++)
        {
            if(i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }
        
        if(isPrime == 1)
        {
            printf("%d ", i);
        }
    }
    
    printf("\n");
    
    return 0;
}