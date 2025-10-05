#include<stdio.h>

/*LAB EXERCISE 2: Multiplication Table
Que: Write a C program that takes an integer input from the user and prints its multiplication
table using a for loop.
Challenge: Allow the user to input the range of the multiplication table (e.g., from 1 to N).*/

//Part 2(Challenge): User decides the range(1 to N)
int main()
{
    int num, N, i;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    printf("Enter the range (e.g., up to N): ");
    scanf("%d", &N);
    
    printf("Multiplication Table of %d up to %d:\n", num, N);
    
    for(i=1; i<=N; i++)
    {
        printf("%d x %d = %d\n", num, i, num*i);
    }
    
    return 0;
}
