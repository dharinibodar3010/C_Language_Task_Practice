#include<stdio.h>
int main ()
{
    int i;
    
    //FOR LOOP
    printf("\n using for loop");
    for(i=1; i<=10; i++)
    {
        printf("\n %d", i);
    }
    
    //WHILE LOOP
    printf("\n using while loop");
    i = 1;
    while(i<=10)
    {
        printf("\n %d", i);
        i++;
    }
    
    //DO WHILE LOOP
    printf("\n using do while");
    i = 1;
    do
    {
        printf("\n %d", i);
        i++;
    }
    while(i<=10);
   
    return 0;
}