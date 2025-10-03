#include<stdio.h>
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