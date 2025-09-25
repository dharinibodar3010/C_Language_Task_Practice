#include<stdio.h>

int main()
{
    int i, j, k;
    int a[3][3], b[3][3], result[3][3]={0};
    
    printf("Enter 3x3 Matrix of A: ");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter 3x3 Matrix of B: ");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            for(k=0; k<3; k++)
            {
                result[i][j] += a[i][k]*b[k][j];
            }
        }
    }
    
    printf("Resultant Matrix is: \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf(" %d ", result[i][j]);
        }
        
        printf("\n");
    }
    
    return 0;

}