#include<stdio.h>

/* LAB EXERCISE 1: Maximum and Minimum in Array
Que: Write a C program that accepts 10 integers from the user and stores them in an array.
The program should then find and print the maximum and minimum values in the array.
Challenge: Extend the program to sort the array in ascending order.*/

int main()
{
    int arr[10], i, j, temp, max, min;
    
    //input 10 integers
    printf("Enter 10 integers: ");
    for(i=0; i<10; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    //Find max and min
    max=min=arr[0];
    for(i=0; i<10; i++)
    {
        if(arr[i]>max) max=arr[i];
        if(arr[i]<min) min=arr[i];
    }
    
    printf("Maximum = %d\n", max);
    printf("minimum = %d\n", min);
    
    //Bubble sort for ascending order
    for(i=0; i<9; i++)
    {
        for(j=i+1; j<10; j++)
        {
            if(arr[i]>arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;  
            }
        }
    }
    
    //print sorted array
    printf("Array in Ascending order: ");
    for(i=0; i<10; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}

    