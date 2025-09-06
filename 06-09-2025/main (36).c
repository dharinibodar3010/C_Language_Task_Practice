#include<stdio.h>
int main()
{
    int i, j, isprime;
    
    printf("prime number between 1 to 10 : ");
    
    for(i=2; i<=10; i++)
    {
        isprime = 1;
        for(j=2; j<=i/2; j++)
        {
            if(i%j==0)
            {
                isprime = 0;
                break;
            }
            
           if(isprime==1)
            {
            printf("\n %d",i);
            }
        }
    }

return 0;
    
}
