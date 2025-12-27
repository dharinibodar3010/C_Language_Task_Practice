#include <stdio.h>

int main()
{
    int num;
    
    printf("enter any number : ");
    scanf("%d", &num);
    
    if(num % 2 == 0)
    {
        printf("\n number is even");
    }
    else 
    {
        printf("\n number is odd");
    }

    return 0;
}
