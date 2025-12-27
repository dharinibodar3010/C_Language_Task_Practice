#include<stdio.h>

int main()
{
    int marks[10];
    
    for(int i=0; i<10; i++)
    {
        printf("Enter marks for student: ");
        scanf("%d", &marks[i]);
    }

    for(int i=0; i<10; i++)
    {
    printf("\n Marks of %d", marks[i]);
    }    
    
    return 0;
}
