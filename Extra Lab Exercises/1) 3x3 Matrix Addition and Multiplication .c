#include<stdio.h>

/* LAB EXERCISE 2: Matrix Addition
Que: Write a C program that accepts two 2x2 matrices from the user and adds them. Display the
resultant matrix.
Challenge: Extend the program to work with 3x3 matrices and matrix multiplication.*/

int main()
{
    int a[3][3], b[3][3], sum[3][3] = {0}, multiplication[3][3] = {0};
    int i, j, k;
    
    // user input first matrix
    printf("Enter elements of 3x3 matrix a: \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    
    // user input second matrix
    printf("Enter elements of 3x3 matrix b: \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    
    // Matrix Addition
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    
    //Matrix multiplication
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            for(k=0; k<3; k++)
            {
                multiplication[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    
    // Display sum
    printf("Matrix Addition (a+b): \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    
    // Display multiplication
    printf("Matrix Multiplication (a*b): \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ", multiplication[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
