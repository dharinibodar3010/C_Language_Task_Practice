#include<stdio.h>

int main()
{
    int size;
    
    printf("Enter total subject: ");
    scanf("%d", &size);
    
    int i, marks[size], total=0;
   
    for(i=0; i<size; i++)
    {
        printf("Enter Marks for Subject %d : ", i+1);
        scanf("%d", &marks[i]);
    }

    for(i=0; i<size; i++)
    {
        total+=marks[i];
    }
    
    float percentage;
    
    percentage = total/size;
    printf("\n total marks %d", total);
    printf("\n percentage %f.", percentage);
    
    if(percentage>=35)
    {
        printf("\n pass");
    }
    else
    {
        printf("\n fail");
    }
    
    return 0;
}