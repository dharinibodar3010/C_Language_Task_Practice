#include<stdio.h>

int main()
{
     int i, j;
     
     for(i=0; i<=5; i++)
     {
         char ch = 'A';
         for(j=0; j<=5; j++)
         {
             printf("%c ", ch);
             ch++;
         }
     
         printf("\n");
    
     }

    return 0;
}
