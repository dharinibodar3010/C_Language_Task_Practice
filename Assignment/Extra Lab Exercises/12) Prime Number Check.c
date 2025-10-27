#include<stdio.h>

/*LAB EXERCISE 1: Prime Number Check
Que: Write a C program that checks whether a given number is a prime number or not using a for
loop.
Challenge: Modify the program to print all prime numbers between 1 and a given number*/

//part 1 : check whether a given number is prime or not

int main()
{
    int num, i, isprime = 1;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if(num <= 1)
    {
        isprime = 0; // 0 and 1 are not prime 
    }
    else
    {
        for(i=2; i<=num/2; i++)
        {
            if(num % i == 0)
            {
                isprime = 0;
                break;
            }
        }
    }
    
    if (isprime)
    {
        printf("%d is a Prime Number.\n", num);
    }
    else
    {
        printf("%d is Not a Prime Number.\n", num);
    }
    
    return 0;
    
}
