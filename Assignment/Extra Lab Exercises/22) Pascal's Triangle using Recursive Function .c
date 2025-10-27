#include<stdio.h>

/*Lab Challenge 2: Pascal’s Triangle
Write a C program that generates Pascal’s Triangle up to N rows using loops.
Challenge: Implement the same program using a recursive function.*/


//Challenge 2: Pascal’s Triangle using a Recursive Function

//Recursive function to calculate factorial
int factorial(int n)
{
    if(n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n -1);
}

//Function to print Pascal's Triangle
void Pascal(int n)
{
    int i, j, space, num;
    
    for(i=0; i<=n; i++)
    {
        for(space=0; space<=n-i; space++)
        {
            printf(" ");
        }
        
        for(j=0; j<=i; j++)
        {
            num = factorial(i) / (factorial(j) * factorial(i - j));
            printf("%4d", num);
        }
        
        printf("\n");
    }
    
}

int main()
{
    int rows;
    
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    
    printf("\nPascal's Triangle using recursion: \n");
    Pascal(rows);
    
    return 0;
}
