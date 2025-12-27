#include<stdio.h>

/*Que:Write a C program that stores 5 integers in a one-dimensional array and prints
them. Extend this to handle a two-dimensional array (3x3 matrix) and
calculate the sum of all elements.*/

int main()
{
    //One-Dimensional Array
    int arr[5];
    int i;
    
    printf("Enter 5 integer: ");
    for(int i=0; i<5; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("\nYou Enter (1D Array): \n");
    for(int i=0; i<5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    //Two-Dimensional Array (3x3 matrix)
    int matrix[3][3];
    int sum = 0;
    
    printf("\nEnter 9 integers for 3x3 matrix: \n");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            scanf("%d", &matrix[i][j]);
            sum = sum + matrix[i][j];
        }
    }
    
    printf("\n3x3 Matrix: \n");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("%d ", matrix[i][j]);
        }
    
        printf("\n");
    }
    
    printf("\nSum of all elements in the Matrix = %d", sum);
    
    return 0;
}


