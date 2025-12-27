#include<stdio.h>

/*LAB EXERCISE 1: Grade Calculator
Que: Write a C program that takes the marks of a student as input and displays the corresponding
grade based on the following conditions:
o Marks > 90: Grade A
o Marks > 75 and <= 90: Grade B
o Marks > 50 and <= 75: Grade C
o Marks <= 50: Grade D
Use if-else orswitch statements for the decision-making process.*/
    
int main ()
{
    int marks;
    
    printf("Enter Any Marks: ");
    scanf("%d", &marks);
    
    
    if(marks>90)
    {
        printf("\n Grade A:%d", marks);
    }
    else if(marks>75 & marks<=90)
    {
        printf("\n Grade B:%d", marks);
    }
    else if(marks>50 & marks<=75)
    {
        printf("\n Grade C:%d", marks);
    }
    else 
    {
        printf("\n Grade D:%d", marks);
    }
    return 0;
}
