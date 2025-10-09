#include<stdio.h>
#include<conio.h>

struct student
{
    int id;
    char name[10];
}st[50];

//using array (dynamicall) - takes user input 
void main()
{
    int i, num;
    
    printf("Enter number of student: "); // user input to decide array size 
    scanf("%d", &num);
    
    for(i=0; i<num; i++)
    {
        printf("Enter id: ");
        scanf("%d", &st[i].id);
        
        printf("Enter name: ");
        scanf("%s", st[i].name);
    }
    
    for(i=0; i<num; i++)
    {
        printf("Your id is %d and Your name is %s\n", st[i].id, st[i].name);
    }

    getch();
}