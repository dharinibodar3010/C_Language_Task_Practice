#include<stdio.h>
#include<conio.h>

//call by reference 
void swap(int *x, int *y);

int main()    
{
    int a = 100;
    int b = 200;
    
    printf("\nBefore swapping value of a : %d", a);
    printf("\nBefore swapping value of b : %d\n", b);
    
    swap(&a,&b);
    
    printf("\nAfter swapping value of a : %d", a);
    printf("\nAfter swapping value of b : %d\n", b);
    
    getch();
    
}

void swap(int *x, int *y)
{
    printf("\nBefore swapping value of x : %d", *x);
    printf("\nBefore swapping value of y : %d\n", *y);
    
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    
    printf("\nAfter swapping value of x : %d", *x);
    printf("\nAfter swapping value of y : %d\n", *y);
}
