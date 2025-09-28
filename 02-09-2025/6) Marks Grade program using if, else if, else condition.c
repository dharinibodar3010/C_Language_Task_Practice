#include<stdio.h>
#include<conio.h>
void main()
{
    int marks = 56;
    if(marks>=70) 
    {
        printf("A Grade");
    }
    else if(marks>=60)
    {
        printf("B Grade");    
    }
    else if(marks>=50)
    {
        printf("C Grade");
    }
    else if(marks>=40)
    {
        printf("D Grade");
    }
    else 
    {
        printf("Fail");
    }
    getch();
}
