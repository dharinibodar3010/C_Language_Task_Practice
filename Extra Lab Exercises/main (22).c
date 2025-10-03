#include<stdio.h>

/*LAB EXERCISE 2: Number Comparison
Que: Write a C program that takes three numbers from the user and determines:
     o The largest number.
     o The smallest number.
Challenge: Solve the problem using both if-else and switch-case statements.*/

int main()
{
    int a, b, c;
    int largest, smallest;
    
    //Input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    
    /***Using if else statements***/
    
    //Find largest
    if(a >= b && a >= c)
      largest = a;
    
    else if(b >= a && b >= c)
      largest = b;
    
    else
      largest = c;
      
    //Find smallest
    if(a <= b && a <= c)
      smallest = a;
    
    else if(b <= a && b <= c)
      smallest = b;
    
    else
      smallest = c;
    
    printf("\n-----using if else statements-----\n"); 
    printf("Largest Number: %d\n", largest);
    printf("Smallest Number: %d\n", smallest);
    
    /***Using switch-case statements***/
    
    //For Largest
    switch(1) //dummy value to allow case labels as conditions
    {
        case 1:
        if(a >= b && a >= c)
        {
            largest = a;
            break;
        }
        
        case 2:
        if(b >= a && b >= c)
        {
            largest = b;
            break;
        }
        
        case 3:
        if(c >= a && c >= b)
        {
            largest = c;
            break;
        }
    }
        
    // For Smallest 
    switch(1) //dummy value to allow case labels as conditions
    {
        case 1:
        if(a >= b && a >= c)
        {
            largest = a;
            break;
        }
        
        case 2:
        if(b >= a && b >= c)
        {
            largest = b;
            break;
        }
        
        case 3:
        if(c >= a && c >= b)
        {
            largest = c;
            break;
        } 
        
    }
    
    printf("\n-----using switch-case statements-----\n");
    printf("Largest Number: %d\n", largest);
    printf("Smallest Number: %d\n", smallest);    
    
    return 0;
}