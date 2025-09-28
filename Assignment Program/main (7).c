#include<stdio.h>

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