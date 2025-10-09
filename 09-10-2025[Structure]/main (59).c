#include<stdio.h>
#include<conio.h>

struct address 
{
    char city[50];
    int zip;
};

struct student
{
    char name[50];
    int age;
    struct address add;
}s1;

void main()
{
    printf("Enter name: ");
    scanf("%s", s1.name);
    
    printf("Enter age: ");
    scanf("%d", &s1.age);
    
    printf("Enter city: ");
    scanf("%s", s1.add.city);
    
    printf("Enter zipcode: ");
    scanf("%d", &s1.add.zip);
    
    printf("Name is %s\n", s1.name);
    printf("Age is %d\n", s1.age);
    printf("City is %s\n", s1.add.city);
    printf("Zipcode is %d\n", s1.add.zip);
    
    getch();
}