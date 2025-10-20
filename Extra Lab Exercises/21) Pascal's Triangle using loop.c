#include<stdio.h>

/*Lab Challenge 2: Pascal’s Triangle
Write a C program that generates Pascal’s Triangle up to N rows using loops.
Challenge: Implement the same program using a recursive function.*/


//Challenge 1: Pascal’s Triangle up to N rows using loops

int main()
{
    int n, i, j, space, num = 1;
    
    printf("Enter number of rows: ");
    scanf("%d", &n);
    
    for(i=0; i<=n; i++)
    {
        for(space=0; space<=n-i; space++)
        {
            printf(" ");
        }
        
        num = 1;
        for(j=0; j<=i; j++)
        {
            printf("%4d ", num);
            num = num * (i - j) / (j + 1);
        }
        
        printf("\n");
    }
    
    return 0;
}