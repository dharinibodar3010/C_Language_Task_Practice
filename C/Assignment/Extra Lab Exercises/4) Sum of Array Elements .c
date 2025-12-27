#include<stdio.h>

/*LAB EXERCISE 3: Sum of Array Elements
Que: Write a C program that takes N numbers from the user and stores them in an array. The
program should then calculate and display the sum of all array elements.
Challenge: Modify the program to also find the average of the numbers.*/

int main()
{
   int n, i;
   float sum, average;
   
   // user input array size
   printf("Enter Array Size: "); 
   scanf("%d", &n);
   
   int arr[n]; // array of size n
   
   // user input array elements
   printf("Enter %d elements: \n", n);
   for(i=0; i<n; i++)
   {
       scanf("%d", &arr[i]);
       sum += arr[i]; 
   }
   
   // calculate average
   average = sum/n;
   
   //Display results
   printf("Sum of array elements: %.2f \n", sum);
   printf("Average of array elements: %.2f \n", average);
   
   return 0;
 }
