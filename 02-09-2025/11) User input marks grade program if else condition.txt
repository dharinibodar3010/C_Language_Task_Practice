#include <stdio.h>
int main()
{
    int marks;
    
    printf("\n Enter Marks : ");
    scanf("%d", &marks);
    
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
    return 0;
}
