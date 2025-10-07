#include<stdio.h>

struct student
{
    int id;
    char name[10];
}s1;

int main()
{
    printf("Enter id: ");
    scanf("%d", &s1.id);
    
    printf("Enter name: ");
    scanf("%s", s1.name);
    
    printf("Your id is %d\n", s1.id);
    printf("Your name is %s\n", s1.name);
    
    return 0;
}