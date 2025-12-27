#include<stdio.h>
#include<conio.h>

// if if condition - execute all condition
void main()
{
    int marks = 56;
    if(marks>=70) 
    {
        printf("A Grade");
    }
    if(marks>=60)
    {
        printf("B Grade");    
    }
    if(marks>=50)
    {
        printf("C Grade");
    }
    if(marks>=40)
    {
        printf("D Grade");
    }
    else 
    {
        printf("Fail");
    }
    getch();
}
