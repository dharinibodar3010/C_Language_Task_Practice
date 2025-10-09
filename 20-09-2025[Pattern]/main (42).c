#include<stdio.h>

//Pascal's Triangle
int main()
{
    int i, j, space, num;
    
    for(i=0; i<5; i++)
    {
        for(space=1; space<=5-i; space++)
        {
            printf(" ");
        }
        
        num = 1;
        for(j=0; j<=i; j++)
        {
            printf("%d ", num);
            num = num * (i-j) / (j+1);
        }
        
        printf("\n");
    }
    
    return 0;
}