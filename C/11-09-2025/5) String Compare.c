#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char name1[50];
    char name2[50];
    
    //used to compare only the first n characters of two strings.
    
    printf("Enter 1st Name : ");
    scanf("%s", &name1);
    
    printf("Enter 2nd Name : ");
    scanf("%s", &name2);
    
    printf("%d",strcmp(name1,name2));
    
    return 0;
}
