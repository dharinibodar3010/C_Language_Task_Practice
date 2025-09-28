#include<stdio.h>

int main()
{
    for(int i=1; i<=3; i++)
    {
        for(int j=1; j<=3; j++)
        {
            if(i==2 && j==2)
            goto end; //jump  out of both loops
            
            printf("%d %d\n", i, j);
        }
    }

    end:
    printf("Exited from loops");
    
    return 0;
}