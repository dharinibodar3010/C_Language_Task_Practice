#include<stdio.h>

/*LAB EXERCISE 2: Multiplication Table
Que: Write a C program that takes an integer input from the user and prints its multiplication
table using a for loop.
Challenge: Allow the user to input the range of the multiplication table (e.g., from 1 to N).*/

//Part 1: Simple multiplication table (1 to 10)
int main()
{
    int n, i;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    printf("Multiplication Table of %d: \n", n);
    
    for(i=1; i<=10; i++)
    {
        printf("%d x %d = %d\n", n, i, n*i);
    }

    return 0;
}
