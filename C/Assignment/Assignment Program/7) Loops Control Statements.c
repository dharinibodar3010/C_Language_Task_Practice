#include<stdio.h>

/*Que:Write a C program that uses the break statement to stop printing numbers
when it reaches 5. Modify the program to skip printing the number 3 using the
continue statement.*/

int main()
{
    int i;
    
    //break statement
    printf("\nNumber untill break (stop at 5): ");
    for(i=1; i<=10; i++)
    {
        if(i == 5)
        {
            break;
        }
    
        printf("\n %d", i);
    }

    //continue statement 
    printf("\nNumbers with continue (skip 3): ");
    for(i=1; i<=10; i++)
    {
        if(i == 3)
        {
            continue;
        }
    
        printf("\n %d", i);
    }

    return 0;
}
