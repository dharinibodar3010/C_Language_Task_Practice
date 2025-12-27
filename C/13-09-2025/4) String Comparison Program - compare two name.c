#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char name1[50];
    char name2[50];
    
    printf("Enter 1st Name : ");
    scanf("%s", &name1);
    
    printf("Enter 2nd Name : ");
    scanf("%s", &name2);
    
    printf("%d",strcmp(name1,name2));
    
    return 0;
}
