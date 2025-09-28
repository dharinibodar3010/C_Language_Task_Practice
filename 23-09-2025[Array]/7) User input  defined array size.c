#include<stdio.h>

int main()
{
    int size;
    
    printf("Enter Array's size : "); //Ex - take 5 number, enter 5 times 
    scanf("%d", &size);
    
    int arr[size];
    
    for(int i=0; i<size; i++)
    {
        printf("\n print %d", i);
    }

    return 0;
}
