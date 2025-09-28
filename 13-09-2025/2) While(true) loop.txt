#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdbool.h>// uses in loop run continuously 
#include<stdlib.h>// when exit the program

int main ()
{
    int choice, m=0, l=0, d=0;
    
    while(true)
    {
        printf("\n Enter 1 for mobile \n Enter 2 for laptop \n Enter 3 for desktop");
        scanf("%d", &choice);
        
        switch(choice)
        {
            case 1: m++;
            printf("total : %d", m);
            break;
            
            case 2: l++;
            printf("total : %d", l);
            break;
            
            case 3: d++;
            printf("total : %d", d);
            break;
            
            case 4: exit(0);
            break;
            
            default : 
            printf("invalid choice!");
            break;
        }
    }

    return 0;
}
