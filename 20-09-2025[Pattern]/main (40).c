#include<stdio.h>

int main()
{
    int i, j, space;
    
    for(i=5; i>=0; i--)
    {
        for(space=1; space<=5-i; space++)
        {
            printf(" ");
        }
        for(j=0; j<=i; j++)
        {
            printf("%c ", 'A'+i);
        }
        
        printf("\n");
    }

    return 0;
}