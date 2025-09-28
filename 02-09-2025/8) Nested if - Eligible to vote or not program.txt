#include<stdio.h>
#include<conio.h>
void main()
{
    int age = 65;
    
    if(age>=18)
    {
        printf("\n eligible to vote");
    
         //nested if
         if(age>=60)
         {
             printf("\n senior citizen");
         }
         else
         {
             printf("\n young age");
         }
    }
    else
    {
        printf("\n not eligible to vote");
    }
    
getch();

}

