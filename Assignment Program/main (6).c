#include<stdio.h>

int main()
{
    int i;
    
    printf("\n------Using For Loop------\n");
    for(int i=1; i<=10; i++)
    {
        printf("\n %d", i);
    }

    printf("\n------Using While Loop------\n");
    i=1;
    while(i<=10)
    {
        printf("\n %d", i);
        i++;
    }

    printf("\n------Using Do While Loop------\n");
    i=1;
    do
    {
        printf("\n %d", i);
        i++;
    }
    while(i<=10);
    
    return 0;
}