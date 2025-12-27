#include <stdio.h>

/* LAB EXERCISE 2: Matrix Addition
Que: Write a C program that accepts two 2x2 matrices from the user and adds them. Display the
resultant matrix.
Challenge: Extend the program to work with 3x3 matrices and matrix multiplication.*/

int main()
{
    int a[2][2], b[2][2], c[2][2];
    int i, j;
    
    // User input first matrix
    printf("Enter elements of 2x2 Matrix a: \n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    
    // User input second matrix
    printf("Enter elements of 2x2 Matrix b: \n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    
    // Add the matrices
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    
    // Display the resultant Matrix
    printf("Resultant matrix (a+b): \n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("%d ", c[i][j]);
        }
        
        printf("\n");
    }
    
    return 0;
    
}

